#include "const_game.h"
#include "resources.h"
#include "rules.h"

int		ft_is_space(char c)
{
	return (c == ' ');
}

int		ft_is_valid_num(char c)
{
	return (c >= '1' && c <= '4');
}

int		ft_is_valid_format(char *str)
{
	char	c;
	int		valid_n_count;
	int		i;

	i = 0;
	valid_n_count = 0;
	c = str[i];
	while (c != '\0' && i < (16 * 2 - 1))
	{
		if (i % 2 == 0)
		{
			if (ft_is_valid_num(c))
				valid_n_count++;
			else
				return (0);
		}
		else if (!ft_is_space(c))
			return (0);
		i++;
		c = str[i];
	}
	if (valid_n_count != 16)
		return (0);
	return (1);
}

int		ft_is_valid_argument(char *str)
{
	const int	expected_len = 16 * 2;
	int			is_valid_len;

	is_valid_len = count_str_len(str) == expected_len;
	return (is_valid_len && ft_is_valid_format(str));
}

int		ft_is_valid_solution(int board[4][4])
{
	if (does_not_satisfy_upper_border(board) ||
		does_not_satisfy_lower_border(board) ||
		does_not_satisfy_left_border(board) ||
		does_not_satisfy_right_border(board))
		return (0);
	return (1);
}
