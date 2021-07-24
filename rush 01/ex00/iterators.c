#include "const_game.h"

void	iterate_row_forw(int board[ROWS][COLS], int col,
	int *tallest_box, int *box_count)
{
	int row;

	row = 0;
	while (row < ROWS)
	{
		if (board[row][col] > *tallest_box)
		{
			*tallest_box = board[row][col];
			*box_count = *box_count + 1;
		}
		row++;
	}
}

void	iterate_row_back(int board[ROWS][COLS], int col,
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

void	iterate_col_forw(int board[ROWS][COLS], int row,
	int *tallest_box, int *box_count)
{
	int col;

	col = 0;
	while (col < COLS)
	{
		if (board[row][col] > *tallest_box)
		{
			*tallest_box = board[row][col];
			*box_count = *box_count + 1;
		}
		col++;
	}
}

void	iterate_col_back(int board[ROWS][COLS], int row,
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
