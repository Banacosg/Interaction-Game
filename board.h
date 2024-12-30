#include "interactor.h"

#ifndef BOARD
#define BOARD

struct Board {
    Cell** board;
};

void showBoardObjects(struct Board board, int r, int c);

void instantiateBoardObjects(struct Board board, int r, int c);

struct Board initBoard(int n);

#endif