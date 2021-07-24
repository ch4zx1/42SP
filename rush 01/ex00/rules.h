#ifndef RULES_H
# define RULES_H

# include "const_game.h"

int	does_not_satisfy_upper_border(int board[ROWS][COLS]);
int	does_not_satisfy_lower_border(int board[ROWS][COLS]);
int	does_not_satisfy_left_border(int board[ROWS][COLS]);
int	does_not_satisfy_right_border(int board[ROWS][COLS]);

#endif
