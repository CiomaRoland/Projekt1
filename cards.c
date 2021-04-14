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
    *pCard=newCard;
}
void printCards(struct Card* pCard){
    Card* seged=pCard;
    printf("Kartyak:\n");
    while(seged!=NULL){
        printf(" %s %s\n", seged->title, seged->status);
        seged = seged->next;
    }
}
void setCardStatus(struct Card** pCard){
    char tmp_title[20];
    char tmp_status[6];

    printf("Melyik kartyat szeretned modositani:");
    scanf("%s", tmp_title);

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