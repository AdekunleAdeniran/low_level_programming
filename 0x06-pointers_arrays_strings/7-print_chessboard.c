#include "holberton.h"

/**
 * print_chessboard - print a chess board
 * @a: array pointer to chess board
 * Return: chessboard
 *
 */

void print_chessboard(char (*a)[8])
{
	int x, y;

	for (x = 0; x < 8; x++)
	{
		for (y = 0; y < 8; y++)
		{
			_putchar(a[x][y]);
		}
		_putchar('\n');
	}
}
