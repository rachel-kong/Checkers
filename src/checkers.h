#ifndef CHECKERS_H
#define CHECKERS_H

#include <stdio.h>

#define BOARD_SIZE 8

/*
 * Data Structures for Checkers
 */
char board[BOARD_SIZE][BOARD_SIZE];

/*
 * Functions to play Checkers game
 */
void initializeBoard(void);
void drawBoard(void);

#endif /*CHECKERS_H*/
