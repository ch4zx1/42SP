#ifndef VALIDATORS_H
# define VALIDATORS_H

# include "const_game.h"

int		ft_is_space(char c);
int		ft_is_valid_num(char c);
int		ft_is_valid_argument(char *str);
int		ft_is_valid_solution(int board[ROWS][COLS]);

#endif
