#include "main.h"
#include "checkers.h"

extern char board[BOARD_SIZE][BOARD_SIZE];

int main(void) {
    initializeBoard();
    drawBoard();

    return(SUCCESS);
}
