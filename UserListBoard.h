//
// Created by csoma on 2021. 04. 16..
//

#ifndef PROJEKT1_USERLISTBOARD_H
#define PROJEKT1_USERLISTBOARD_H
#include<malloc.h>
#include<stdio.h>
#include "string.h"

typedef struct UserListBoard{
    char name_board[20];
    char name_user[20];
    struct UserListBoard*next;
}UserListBoard;

void createUserListBoard(struct UserListBoard** pUserListBoard);
void addUserBoard(struct UserListBoard** pUserListBoard,char[],char[]);

#endif //PROJEKT1_USERLISTBOARD_H
