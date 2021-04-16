//
// Created by István on 4/16/2021.
//

#ifndef PROJEKT1_CARDLISTBOARD_H
#define PROJEKT1_CARDLISTBOARD_H
#include <malloc.h>
#include <stdio.h>
#include <string.h>

typedef struct cardListBoard{
    char name_board[20];
    char name_card[20];
    struct cardListBoard* next;
}cardListBoard;

void createcardListBoard(struct cardListBoard** pcardListBoard);
void addcardBoard(struct cardListBoard** pcardListBoard,char[],char[]);

#endif //PROJEKT1_CARDLISTBOARD_H
