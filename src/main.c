#include "main.h"
#include "checkers.h"

/*
 * Global Variables
 */
extern char board[BOARD_SIZE][BOARD_SIZE];

/*
 * main()
 */
int main(void) {
    initializeBoard();
    drawBoard();

    return(SUCCESS);
}
