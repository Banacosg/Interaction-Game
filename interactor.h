#ifndef INTERACTOR
#define INTERACTOR

typedef struct Cell{
    void* occupant;
    int row;
    int col;
} Cell;

typedef struct Personality{
    double charity, forgiveness, outgoingness, impressionability, fairness, tolerance;
} Personality;

typedef struct Interactor{
    struct Personality;
    int xPosition, yPosition;
    double energy;
} Interactor;

#endif