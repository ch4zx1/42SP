#include "const_game.h"
#include "resources.h"

void	show_board(int board[4][4])
{
	int	row;
	int	col;

	row = 0;
	while (row < 4)
	{
		col = 0;
		while (col < 4)
		{
			put_num_as_char(board[row][col]);
			if (col != 4 - 1)
				put_char(' ');
			col++;
		}
		put_char('\n');
		row++;
	}
}

void	create_board(int board[4][4])
{
	int	row;
	int	col;

	row = 0;
	while (row < 4)
	{
		col = 0;
		while (col < 4)
		{
			board[row][col] = 0;
			col++;
		}
		row++;
	}
}

void	copy_board(int board[4][4], int copy[4][4])
{
	int row;
	int col;

	row = 0;
	while (row < 4)
	{
		col = 0;
		while (col < 4)
		{
			copy[row][col] = board[row][col];
			col++;
		}
		row++;
	}
}
