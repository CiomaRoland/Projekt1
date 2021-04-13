//
// Created by csoma on 2021. 04. 13..
//

#ifndef PROJEKT1_USERS_H
#define PROJEKT1_USERS_H
#include<stdio.h>
#include<malloc.h>

typedef struct User{
    int id;
    char name[20];
    struct User *next;
}User;

void createUser(struct User** pUser);
void addUser(struct User** pUser,int id, char name[20]);

#endif //PROJEKT1_USERS_H
