#include "const_game.h"
#include "iterators.h"

extern int	g_borders[16];

int	does_not_satisfy_upper_border(int board[4][4])
{
	int col;
	int box_count;
	int tallest_box;
	int border_idx;

	border_idx = 0;
	col = 0;
	while (border_idx < (16 - 12))
	{
		box_count = 0;
		tallest_box = 0;
		iterate_row_forw(board, col, &tallest_box, &box_count);
		if (box_count != g_borders[border_idx])
			return (1);
		border_idx++;
		col++;
	}
	return (0);
}

int	does_not_satisfy_lower_border(int board[4][4])
{
	int col;
	int box_count;
	int tallest_box;
	int border_idx;

	border_idx = 16 - 12;
	col = 0;
	while (border_idx < (16 - 8))
	{
		box_count = 0;
		tallest_box = 0;
		iterate_row_back(board, col, &tallest_box, &box_count);
		if (box_count != g_borders[border_idx])
			return (1);
		border_idx++;
		col++;
	}
	return (0);
}

int	does_not_satisfy_left_border(int board[4][4])
{
	int row;
	int box_count;
	int tallest_box;
	int border_idx;

	border_idx = 16 - 8;
	row = 0;
	while (border_idx < (16 - 4))
	{
		box_count = 0;
		tallest_box = 0;
		iterate_col_forw(board, row, &tallest_box, &box_count);
		if (box_count != g_borders[border_idx])
			return (1);
		border_idx++;
		row++;
	}
	return (0);
}

int	does_not_satisfy_right_border(int board[4][4])
{
	int row;
	int box_count;
	int tallest_box;
	int border_idx;

	row = 0;
	border_idx = 16 - 4;
	while (border_idx < 16)
	{
		box_count = 0;
		tallest_box = 0;
		iterate_col_back(board, row, &tallest_box, &box_count);
		if (box_count != g_borders[border_idx])
			return (1);
		border_idx++;
		row++;
	}
	return (0);
}
