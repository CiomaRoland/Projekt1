//
// Created by csoma on 2021. 04. 15..
//

#ifndef PROJEKT1_BOARDS_H
#define PROJEKT1_BOARDS_H
#include<stdio.h>
#include<malloc.h>
#include"users.h"
#include<string.h>

typedef struct Board{
    char name[20];
    struct User* users;
    struct Board *next;
}Board;

void createBoard(struct Board** pBoard);
void addBoard(struct Board** pBoard);
void printBoards(struct Board* pBoard);
void addUserToBoard(struct Board** pBoard,struct User** pUser);

#endif //PROJEKT1_BOARDS_H
