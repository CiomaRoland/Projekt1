//
// Created by csoma on 2021. 04. 15..
//

#ifndef PROJEKT1_BOARDS_H
#define PROJEKT1_BOARDS_H
#include<stdio.h>
#include<malloc.h>
#include<string.h>
#include "UserListBoard.h"
#include "users.h"
#include "cards.h"
#include "CardListBoard.h"

typedef struct Board{
    char name[20];
    int id[50];
    struct Board *next;
}Board;

void createBoard(struct Board** pBoard);
void addBoard(struct Board** pBoard);
void printBoards(struct Board* pBoard);
void addUserToBoard(UserListBoard**,struct Board* pBoard, struct User* pUser);
void printBoardUsers(UserListBoard*);
void addCardToBoard(cardListBoard**,struct Board* pBoard, struct Card* pCard);
void printBoardCards(cardListBoard*);


#endif //PROJEKT1_BOARDS_H
