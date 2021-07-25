#include "const_game.h"

void	iterate_row_forw(int board[4][4], int col,
	int *tallest_box, int *box_count)
{
	int row;

	row = 0;
	while (row < 4)
	{
		if (board[row][col] > *tallest_box)
		{
			*tallest_box = board[row][col];
			*box_count = *box_count + 1;
		}
		row++;
	}
}

void	iterate_row_back(int board[4][4], int col,
	int *tallest_box, int *box_count)
{
	int row;

	row = 3;
	while (row >= 0)
	{
		if (board[row][col] > *tallest_box)
		{
			*tallest_box = board[row][col];
			*box_count = *box_count + 1;
		}
		row--;
	}
}

void	iterate_col_forw(int board[4][4], int row,
	int *tallest_box, int *box_count)
{
	int col;

	col = 0;
	while (col < 4)
	{
		if (board[row][col] > *tallest_box)
		{
			*tallest_box = board[row][col];
			*box_count = *box_count + 1;
		}
		col++;
	}
}

void	iterate_col_back(int board[4][4], int row,
	int *tallest_box, int *box_count)
{
	int col;

	col = 3;
	while (col >= 0)
	{
		if (board[row][col] > *tallest_box)
		{
			*tallest_box = board[row][col];
			*box_count = *box_count + 1;
		}
		col--;
	}
}
