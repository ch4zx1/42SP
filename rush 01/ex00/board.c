#include "const_game.h"
#include "resources.h"

void	show_board(int board[ROWS][COLS])
{
	int	row;
	int	col;

	row = 0;
	while (row < ROWS)
	{
		col = 0;
		while (col < COLS)
		{
			put_num_as_char(board[row][col]);
			if (col != COLS - 1)
				put_char(' ');
			col++;
		}
		put_char('\n');
		row++;
	}
}

void	create_board(int board[ROWS][COLS])
{
	int	row;
	int	col;

	row = 0;
	while (row < ROWS)
	{
		col = 0;
		while (col < COLS)
		{
			board[row][col] = 0;
			col++;
		}
		row++;
	}
}

void	copy_board(int board[ROWS][COLS], int copy[ROWS][COLS])
{
	int row;
	int col;

	row = 0;
	while (row < ROWS)
	{
		col = 0;
		while (col < COLS)
		{
			copy[row][col] = board[row][col];
			col++;
		}
		row++;
	}
}
