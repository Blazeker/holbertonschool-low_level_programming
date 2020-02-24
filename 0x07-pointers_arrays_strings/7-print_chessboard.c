#include "holberton.h"

/**
 *print_chessboard - Return an pointer
 *@a : a matriz
 *Return: an pointer
 */

void print_chessboard(char (*a)[8])
{
	int i = 0, p = 0;

	for (i = 0; i < 8; i++)
	{
		for (p = 0; p < 8; p++)
		{
			if (a[i][p] != ' ')
				_putchar(a[i][p]);
		}
		_putchar('\n');
	}
}
