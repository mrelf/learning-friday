#include <stdio.h>

void GOL_mainMenu()
{
	printf("Game of Life: \n");
	printf("1. Read rules. \n");
	printf("2. Read visual rules. \n");
	printf("3. Play the Game of Life. \n");
	printf("4. Exit. \n");
	printf("Enter your choice: ");
}

//game rules
//text rules
void GOL_readRules()
{
	printf("The universe of the Game of Life is an infinite two-dimensional orthogonal grid of square cells, each of which is in one of two possible states, alive or dead. Every cell interacts with its eight neighbours, which are the cells that are horizontally, vertically, or diagonally adjacent. At each step in time, the following transitions occur:\n");
	printf("- Any live cell with fewer than two live neighbours dies, as if caused by under-population.");
	printf("- Any live cell with two or three live neighbours lives on to the next generation.");
	printf("- Any live cell with more than three live neighbours dies, as if by overcrowding.");
	printf("- Any dead cell with exactly three live neighbours becomes a live cell, as if by reproduction.");
	printf("The initial pattern constitutes the seed of the system. The first generation is created by applying the above rules simultaneously to every cell in the seed—births and deaths occur simultaneously, and the discrete moment at which this happens is sometimes called a tick (in other words, each generation is a pure function of the preceding one). The rules continue to be applied repeatedly to create further generations.\n");
}