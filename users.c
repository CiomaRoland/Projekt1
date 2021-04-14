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
void addUser(struct User** pUser,int* id){
    User *newUser;
    createUser(&newUser);
    newUser->id=*id;
    newUser->next=*pUser;
    printf("Uj felhasznalo neve:");
    gets(newUser->name);
    *pUser=newUser;
    *id=*id+1;
}
void printUsers(struct User* pUser){
    User* seged=pUser;
    printf("Felhasznalok:\n");
    while(seged!=NULL){
        printf(" %s\n", seged->name);
        seged = seged->next;
    }
}