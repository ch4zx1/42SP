#ifndef SOLVER_H
# define SOLVER_H

# include "const_game.h"

int		should_stop_checking(int idx);
void	handle_final_solution(int board[ROWS][COLS]);
void	check_if_valid(int board[ROWS][COLS], int i, int idx, int *valid);
int		solve_board(void);

#endif
