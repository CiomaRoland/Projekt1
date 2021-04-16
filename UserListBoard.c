//
// Created by csoma on 2021. 04. 16..
//

#include "UserListBoard.h"


void createUserListBoard(struct UserListBoard** pUserListBoard){
    (*pUserListBoard)=(UserListBoard*)malloc(1*sizeof(UserListBoard));
    if ((*pUserListBoard)==NULL){
        printf("Hiba a helyfoglalasnal");
    }
}
void addUserBoard(struct UserListBoard** pUserListBoard, char board[20],char user[20]){
    UserListBoard *newUserListBoard;
    createUserListBoard(&newUserListBoard);
    strcpy(newUserListBoard->name_user,user);
    strcpy(newUserListBoard->name_board,board);
    newUserListBoard->next=*pUserListBoard;
    *pUserListBoard=newUserListBoard;
}