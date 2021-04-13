//
// Created by csoma on 2021. 04. 13..
//

#include "users.h"

void createUser(struct User** pUser){
    (*pUser)=(User*)malloc(1*sizeof(User));
    if ((*pUser)==NULL){
        printf("Hiba a helyfoglalasnal");
    }
}
void addUser(struct User** pUser,int id, char name[20]){
    User *newUser;
    createUser(&newUser);
    newUser->id=id;
    gets(newUser->name);
    *pUser=newUser;
}