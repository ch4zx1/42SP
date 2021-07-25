#ifndef SOLVER_H
# define SOLVER_H

# include "const_game.h"

int		should_stop_checking(int idx);
void	handle_final_solution(int board[4][4]);
void	check_if_valid(int board[4][4], int i, int idx, int *valid);
int		solve_board(void);

#endif
