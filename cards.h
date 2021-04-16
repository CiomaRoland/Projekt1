//
// Created by csoma on 2021. 04. 14..
//

#ifndef PROJEKT1_CARDS_H
#define PROJEKT1_CARDS_H
#include <malloc.h>
#include <stdio.h>
#include <string.h>

typedef struct Card{
    char title[20];
    char description[100];
    char status[6];
    int user_id;
    int hozzaVanAdvaEgyTablahoz;
    struct Card *next;
}Card;

void createCard(struct Card** pCard);
void addCard(struct Card** pCard);
void printCards(struct Card* pCard);
void setCardStatus(struct Card** pCard);
void getCardStatus(struct Card** pCard);
void setCardTitle(struct Card** pCard);
void setCardDescription(struct Card** pCard);
void getCardsByStatus(struct Card* pCard);

#endif //PROJEKT1_CARDS_H
