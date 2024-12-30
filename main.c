#include <stdio.h>
#include <stdlib.h>
#include "board.h"
#include "interactor.h"
#define SIZE 10

int main(){
    printf("%d\n", 3);
    struct Board board = initBoard(SIZE);
    instantiateBoardObjects(board, SIZE, SIZE);
    showBoardObjects(board, SIZE, SIZE);
    return 0;
}