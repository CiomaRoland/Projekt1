#include "users.h"
#include "cards.h"
#include "boards.h"
#include "UserListBoard.h"
#include "CardListBoard.h"

int main() {
    //users
    User* users=NULL;
    int id=0;
    //cards
    Card * cards=NULL;
    //boards
    Board* boards=NULL;
    cardListBoard* cardListBoard = NULL;
    UserListBoard* userListBoard = NULL;
    //viz_felulet;
    printf("1.Felhasznalo letrehozasa\n");
    printf("2.Tabla letrehozasa\n");
    printf("3.Kartya letrehozasa\n");
    printf("4.Felhasznalo hozzaadasa a tablahoz\n");
    printf("5.Katya hozzaadasa a tablahoz\n");
    printf("6.Kartya statusza\n");
    printf("7.Kartya statuszanak beallitasa\n");
    printf("8.Kartya cimenek beallitasa\n");
    printf("9.Kartya leirasanak beallitasa\n");
    printf("10.Osszes felhasznalo listazasa\n");
    printf("11.Kartyak listazasa adott statusz alapjan\n");
    printf("12.Osszes tabla listazasa\n");
    printf("13.Tabla-felhasznalok listazasa\n");
    printf("14.Tabla-kartyak listazasa\n");
    printf("X.Kilepes\n");
    char valasz[5];
    int szam;
    printf(">>");
    gets(valasz);
    while(strcmp(valasz,"X")!=0){
        szam=atoi(valasz);
        switch (szam) {
            case 1:addUser(&users,&id);
                break;
            case 2:addBoard(&boards);
                break;
            case 3:addCard(&cards);
                break;
            case 4:addUserToBoard(&userListBoard,boards,users);
                break;
            case 5:addCardToBoard(&cardListBoard,boards,cards);
                break;
            case 6:getCardStatus(&cards);
                break;
            case 7:setCardStatus(&cards);
                break;
            case 8:setCardTitle(&cards);
                break;
            case 9:setCardDescription(&cards);
                break;
            case 10:printUsers(users);
                break;
            case 11:getCardsByStatus(cards);
                break;
            case 12:printBoards(boards);
                break;
            case 13:printBoardUsers(userListBoard);
                break;
            case 14:printBoardCards(cardListBoard);
                break;
        }
        printf(">>");
        gets(valasz);
    }
    return 0;
}
