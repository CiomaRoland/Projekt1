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
        printf(" %s\n", seged->title);
        seged = seged->next;
    }
}
void setCardStatus(struct Card** pCard){

}