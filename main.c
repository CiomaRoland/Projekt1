#include "users.h"
#include "cards.h"
#include "boards.h"
#include "UserListBoard.h"

int main() {
    //users
    User* users=NULL;
    int id=0;
    for (int i=0; i<5; ++i) {
        addUser(&users, &id);
    }
    //printUsers(users);

    //cards
    Card * cards=NULL;
    for (int i=0; i<3; ++i) {
        //addCard(&cards);
    }
    //printCards(cards);

    //setCardStatus(&cards);

  //  printCards(cards);
  //  getCardStatus(&cards);

   // setCardTitle(&cards);
    //setCardDescription(&cards);
    //printCards(cards);

    //getCardsByStatus(cards);

    //boards
    Board* boards=NULL;
    for (int i=0; i<3; ++i) {
        addBoard(&boards);
    }
    UserListBoard* userListBoard=NULL;
    addUserToBoard(&userListBoard,boards,users);
    addUserToBoard(&userListBoard,boards,users);
    addUserToBoard(&userListBoard,boards,users);
    addUserToBoard(&userListBoard,boards,users);
    printBoardUsers(userListBoard);
    return 0;
}
