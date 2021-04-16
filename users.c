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
    char newName[20];
    printf("Uj felhasznalo neve:");
    gets(newName);
    User* seged=*pUser;
    int volt_e=0;
    while (seged != NULL) {
        if (strcmp(seged->name,newName) == 0) {
            volt_e=1;
            break;
        }
        seged = seged->next;
    }
    if (volt_e==0) {
        User *newUser;
        createUser(&newUser);
        newUser->id = *id;
        strcpy(newUser->name, newName);
        newUser->next = *pUser;
        *pUser = newUser;
        *id = *id + 1;
    }else{
        printf("Ilyen nevu felhasznalo mar letezik!\n");
    }
}
void printUsers(struct User* pUser){
    User* seged=pUser;
    printf("Felhasznalok:\n");
    while(seged!=NULL){
        printf(" %s\n", seged->name);
        seged = seged->next;
    }
}