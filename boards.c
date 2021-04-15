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
    newBoard->users=NULL;
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
void addUserToBoard(struct Board** pBoard,struct User** pUser){
    char tmp_user[20];
    char tmp_board[20];

    printf("Melyik felhasznalot szeretned hozzaadni egy tablahoz?");
    gets(tmp_user);

    User* seged=*pUser;
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
        printf("Nincs ilyen nevu felhaszalo!\n");
    } else {
        Board* seged=*pBoard;
        Board* megvanBoard = NULL;

        printf("Melyik tablahoz szeretned hozzaadni a felhasznalot?");
        gets(tmp_board);
        while (seged != NULL) {
            if (strcmp(seged->name,tmp_board) == 0) {
                //elmenteni a cimet
                megvanBoard = seged;
                break;
            }
            seged = seged->next;
        }
        if (megvanBoard == NULL) {
            printf("Nincs ilyen nevu tabla!\n");
        }else{
            megvanBoard->users=megvanUser;
        }
    }
}