#include "board.h"
#include "const_game.h"
#include "resources.h"
#include "rules.h"
#include "validators.h"

extern int	g_borders[16];
int			g_final_solution[4][4];
int			g_found_final_solution = 0;

int		should_stop_checking(int idx)
{
	return ((idx == 16) || g_found_final_solution);
}

void	handle_final_solution(int board[4][4])
{
	g_found_final_solution = 1;
	copy_board(board, g_final_solution);
}

int		check_board(int board[4][4], int i, int idx)
{
	int row_or_col;

	row_or_col = 0;
	while (row_or_col < idx / 4 || row_or_col < idx % 4)
	{
		if (i == board[row_or_col][idx % 4] ||
			i == board[idx / 4][row_or_col])
			return (0);
		row_or_col++;
	}
	return (1);
}

void	modify_board(int board[4][4], int idx)
{
	int test_board[4][4];
	int is_valid;
	int i;

	if (should_stop_checking(idx))
	{
		if (ft_is_valid_solution(board))
			handle_final_solution(board);
		return ;
	}
	i = 1;

	while (i <= 4)
	{
		is_valid = 1;
		copy_board(board, test_board);
		is_valid = check_board(board, i, idx);
		if (is_valid)
		{
			test_board[idx / 4][idx % 4] = i;
			modify_board(test_board, idx + 1);
			test_board[idx / 4][idx % 4] = 0;
		}
		i++;
	}
}

int		solve_board(void)
{
	int	start_idx;
	int	board[4][4];

	start_idx = 0;
	create_board(board);
	modify_board(board, start_idx);
	if (!g_found_final_solution)
		return (show_error());
	show_board(g_final_solution);
	return (0);
}
