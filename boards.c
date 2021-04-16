//
// Created by csoma on 2021. 04. 15..
//

#include "boards.h"


void createBoard(struct Board** pBoard){
    (*pBoard)=(Board*)malloc(1*sizeof(Board));
    if ((*pBoard)==NULL){
        printf("Hiba a helyfoglalasnal");
    }
}
void addBoard(struct Board** pBoard){
    Board *newBoard;
    createBoard(&newBoard);
    printf("Uj tabla neve:");
    gets(newBoard->name);
    newBoard->next=*pBoard;
    *pBoard=newBoard;
}
void printBoards(struct Board* pBoard){
    Board* seged=pBoard;
    printf("Tablak:\n");
    while(seged!=NULL){
        printf(" %s\n", seged->name);
        seged = seged->next;
    }
}
void addUserToBoard(UserListBoard** pUserListBoard,struct Board* pBoard, struct User* pUser){
    char tmp_user[20];
    char tmp_board[100];

    printf("Melyik felhasznalot szeretned hozzaadni?");
    gets(tmp_user);

    User* seged=pUser;
    User* megvanUser = NULL;
    while (seged != NULL) {
        if (strcmp(seged->name,tmp_user) == 0) {
            //elmenteni a cimet
            megvanUser = seged;
            break;
        }
        seged = seged->next;
    }

    if (megvanUser == NULL) {
        printf("Nincs ilyen nevu felhasznalo!\n");
    } else {
        printf("Melyik tablahoz szeretned hozzaadni?");
        gets(tmp_board);
        Board *seged2 = pBoard;
        Board *megvanBoard = NULL;
        while (seged2 != NULL) {
            if (strcmp(seged2->name, tmp_board) == 0) {
                //elmenteni a cimet
                megvanBoard = seged2;
                break;
            }
            seged2 = seged2->next;
        }
        if (megvanBoard == NULL) {
            printf("Nincs ilyen nevu tabla!\n");
        } else {
            int volt_e=0;
            UserListBoard* seged3=*pUserListBoard;
            while(seged3!=NULL){
                if ((strcmp(seged3->name_user,seged->name)==0) && (strcmp(seged3->name_board,seged2->name))==0){
                    volt_e=1;
                }
                seged3 = seged3->next;
            }
            if (volt_e==1){
                printf("Ezt a felhasznalot mar hozzadtuk a tablahoz!\n");
            }else {
                addUserBoard(pUserListBoard, megvanBoard->name, megvanUser->name);
            }
        }
    }
}
void printBoardUsers(UserListBoard* userListBoard){
    UserListBoard* seged=userListBoard;
    printf("Tablak es felhasznalok:\n");
    while(seged!=NULL){
        printf(" %s-%s\n", seged->name_board,seged->name_user);
        seged = seged->next;
    }
}

void addCardToBoard(cardListBoard** pcardListBoard,struct Board* pBoard, struct Card* pCard){
    char tmp_card[20];
    char tmp_board[100];

    printf("Melyik kartyat szeretned hozzaadni a tablahoz?");
    gets(tmp_card);

    Card* seged=pCard;
    Card* megvanCard = NULL;
    while (seged != NULL) {
        if (strcmp(seged->title,tmp_card) == 0) {
            //elmenteni a cimet
            megvanCard = seged;
            break;
        }
        seged = seged->next;
    }

    if (megvanCard == NULL) {
        printf("Nincs ilyen nevu kartya!\n");
    } else {
        if(megvanCard->hozzaVanAdvaEgyTablahoz==0) {
            printf("Melyik tablahoz szeretned hozzaadni a kartyat?");
            gets(tmp_board);
            Board *seged2 = pBoard;
            Board *megvanBoard = NULL;
            while (seged2 != NULL) {
                if (strcmp(seged2->name, tmp_board) == 0) {
                    //elmenteni a cimet
                    megvanBoard = seged2;
                    break;
                }
                seged2 = seged2->next;
            }
            if (megvanBoard == NULL) {
                printf("Nincs ilyen nevu tabla!\n");
            } else {
                addcardBoard(pcardListBoard, megvanBoard->name, megvanCard->title);
                megvanCard->hozzaVanAdvaEgyTablahoz=1;
            }
        }
        else{
            printf("Ez a kartya mar hozza van adva egy masik tablahoz\n");
        }
    }
}
void printBoardCards(cardListBoard* pcardListBoard){
    cardListBoard* seged=pcardListBoard;
    printf("Tablak es kartyaik:\n");
    while(seged!=NULL){
        printf(" %s-%s\n", seged->name_board,seged->name_card);
        seged = seged->next;
    }
}

