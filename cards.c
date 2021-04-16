//
// Created by csoma on 2021. 04. 14..
//

#include "cards.h"

void createCard(struct Card** pCard){
    (*pCard)=(Card*)malloc(1*sizeof(Card));
    if ((*pCard)==NULL){
        printf("Hiba a helyfoglalasnal");
    }
}
void addCard(struct Card** pCard){
    Card *newCard;
    createCard(&newCard);
    printf("Uj kartya cime:");
    gets(newCard->title);
    printf("Uj kartya leirasa:");
    gets(newCard->description);
    sprintf(newCard->status,"TO DO");
    newCard->user_id=-1;
    newCard->next=*pCard;
    newCard->hozzaVanAdvaEgyTablahoz=0;
    *pCard=newCard;
}
void printCards(struct Card* pCard){
    Card* seged=pCard;
    printf("Kartyak:\n");
    while(seged!=NULL){
        printf(" %s %s %s\n", seged->title, seged->status, seged->description);
        seged = seged->next;
    }
}
void setCardStatus(struct Card** pCard){
    char tmp_title[20];
    char tmp_status[6];

    printf("Melyik kartyat szeretned modositani:");
    gets(tmp_title);

    Card* seged=*pCard;
    Card* megvanCard = NULL;
    while (seged != NULL) {
        if (strcmp(seged->title,tmp_title) == 0) {
            //elmenteni a cimet
            megvanCard = seged;
            break;
        }
        seged = seged->next;
    }

    if (megvanCard == NULL) {
        printf("Nincs ilyen nevu kartya!\n");
    } else {
        printf("Kerem az uj statuszt:");
        gets(tmp_status);
        sprintf(megvanCard->status,tmp_status);
    }

}
void getCardStatus(struct Card** pCard){
    char tmp_title[20];

    printf("Melyik kartya statuszat szeretned?:");
    gets(tmp_title);

    Card* seged=*pCard;
    Card* megvanCard = NULL;
    while (seged != NULL) {
        if (strcmp(seged->title,tmp_title) == 0) {
            //elmenteni a cimet
            megvanCard = seged;
            break;
        }
        seged = seged->next;
    }

    if (megvanCard == NULL) {
        printf("Nincs ilyen nevu kartya!\n");
    } else {
        printf("A kartya statusza: %s\n", megvanCard->status);
    }

}

void setCardTitle(struct Card** pCard){
    char tmp_title[20];
    char tmp_title2[20];

    printf("Melyik kartyat szeretned modositani:");
    gets(tmp_title);

    Card* seged=*pCard;
    Card* megvanCard = NULL;
    while (seged != NULL) {
        if (strcmp(seged->title,tmp_title) == 0) {
            //elmenteni a cimet
            megvanCard = seged;
            break;
        }
        seged = seged->next;
    }

    if (megvanCard == NULL) {
        printf("Nincs ilyen nevu kartya!\n");
    } else {
        printf("Kerem az uj cimet:");
        gets(tmp_title2);
        sprintf(megvanCard->title,tmp_title2);
    }

}

void setCardDescription(struct Card** pCard){
    char tmp_title[20];
    char tmp_descr[100];

    printf("Melyik kartyat szeretned modositani:");
    gets(tmp_title);

    Card* seged=*pCard;
    Card* megvanCard = NULL;
    while (seged != NULL) {
        if (strcmp(seged->title,tmp_title) == 0) {
            //elmenteni a cimet
            megvanCard = seged;
            break;
        }
        seged = seged->next;
    }

    if (megvanCard == NULL) {
        printf("Nincs ilyen nevu kartya!\n");
    } else {
        printf("Kerem az uj leirast:");
        gets(tmp_descr);
        sprintf(megvanCard->description,tmp_descr);
    }

}

void getCardsByStatus(struct Card* pCard){
    Card* seged=pCard;
    char tmp_status[6];

    printf("Milyen tipusu kartyakat szeretnel latni?\n");
    gets(tmp_status);

    if (strcmp(tmp_status,"TO DO") == 0 || strcmp(tmp_status,"DOING") == 0 || strcmp(tmp_status,"DONE") == 0){
        while(seged!=NULL){
            if (strcmp(tmp_status,seged->status) == 0) {
                printf(" %s\n", seged->title);
            }
            seged = seged->next;
        }
    } else {
        printf("Elgepelt statusz");
    }

}