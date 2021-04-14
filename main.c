#include "users.h"
#include "cards.h"

int main() {
    //users
    User* users=NULL;
    int id=0;
    for (int i=0; i<3; ++i) {
        addUser(&users, &id);
    }
    printUsers(users);

    //boards
    Card * cards=NULL;
    for (int i=0; i<3; ++i) {
        addCard(&cards);
    }
    printCards(cards);
    return 0;
}
