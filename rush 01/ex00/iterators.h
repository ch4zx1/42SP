#ifndef ITERATORS_H
# define ITERATORS_H

# include "const_game.h"

void	iterate_row_forw(int board[4][4], int col,
	int *tallest_box, int *box_count);
void	iterate_row_back(int board[4][4], int col,
	int *tallest_box, int *box_count);
void	iterate_col_forw(int board[4][4], int row,
	int *tallest_box, int *box_count);
void	iterate_col_back(int board[4][4], int row,
	int *tallest_box, int *box_count);

#endif
