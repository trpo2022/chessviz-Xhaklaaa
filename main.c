#include <stdio.h>

int main()
{
	int i, j;
	char chess[9][9]
		= {{'8', 'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'},
		{'7', 'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
		{'6', '_', '_', '_', '_', '_', '_', '_', '_'},
		{'5', '_', '_', '_', '_', '_', '_', '_', '_'},
		{'4', '_', '_', '_', '_', '_', '_', '_', '_'},
		{'3', '_', '_', '_', '_', '_', '_', '_', '_'},
		{'2', 'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
		{'1', 'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'},
		{' ', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h'}};
		printf("\n");
	for (i = 0; i < 9; i++) {
		for (j = 0; j < 9; j++) {
		printf("%c", chess[i][j]);
		}
	printf("\n");
	}
	return 0;
}
