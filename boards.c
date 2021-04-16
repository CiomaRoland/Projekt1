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
            addUserBoard(pUserListBoard,megvanBoard->name,megvanUser->name);
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
