//
// Created by István on 4/16/2021.
//

#include "CardListBoard.h"

void createcardListBoard(struct cardListBoard** pcardListBoard){
    (*pcardListBoard)=(cardListBoard*)malloc(1*sizeof(cardListBoard));
    if ((*pcardListBoard)==NULL){
        printf("Hiba a helyfoglalasnal");
    }
}

void addcardBoard(struct cardListBoard** pcardListBoard,char name_card[20],char name_board[20]){
    cardListBoard *newcardListBoard;
    createcardListBoard(&newcardListBoard);
    strcpy(newcardListBoard->name_card,name_card);
    strcpy(newcardListBoard->name_board,name_board);
    newcardListBoard->next=*pcardListBoard;
    *pcardListBoard=newcardListBoard;
}