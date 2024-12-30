#include "interactor.h"
#include "board.h"
#include <stdio.h>
#include <stdlib.h>

void instantiateBoardObjects(struct Board board, int rows, int cols){
    int a = 10;
    int*b = &a;
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){ 
            struct Cell cell = {b, i, j};
            board.board[i][j] = cell;
        }
    }
}

void showBoardObjects(struct Board board, int rows, int cols){
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            struct Cell cell = board.board[i][j];
            printf("Object Address: %p, Row: %d, Col: %d\n", cell.occupant, cell.row, cell.col);
        }
    }
}

struct Board initBoard(int n){
    if (n > 50){
        printf("The board size is too large!\n");
        exit(EXIT_FAILURE);
    }
    Cell ** cells = malloc(n * sizeof(int*));
    for(int i = 0; i < n; i++){
        cells[i] = malloc(n * sizeof(struct Cell));
    }
    struct Board board = {cells};
    return board;
}