#include "checkers.h"

/*
 * Functions to play Checkers game
 */

void initializeBoard(void) {
    /* loop through matrix and set cell */
    for (int row=0; row<BOARD_SIZE; row++) {
        for (int col=0; col<BOARD_SIZE; col++) {
            /* setup black */
            if ( (row == 0) || (row == 1) ) {
                board[row][col] = 'X';
            }
            /* setup white */
            if ( (row == BOARD_SIZE-2) || (row == BOARD_SIZE-1) ) {
                board[row][col] = 'O';
            }
        }
    }
}

void drawBoard(void) {
    /* loop through matrix and print out values */
    for (int row=0; row<BOARD_SIZE; row++) {
        for (int col=0; col<BOARD_SIZE; col++) {
            printf("%c",board[row][col]);
        }
        printf("\n");
    }
}

