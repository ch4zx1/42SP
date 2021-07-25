#include "const_game.h"
#include "resources.h"
#include "validators.h"

extern int		g_borders[16];

char	*filter_args(char **args)
{
	args++;
	return (*args);
}

void	parse_arguments(char *str)
{
	char	c;
	int		i;
	int		j;

	i = 0;
	j = 0;
	c = str[i];
	while (c != '\0' && i < (16 * 2 - 1))
	{
		if (ft_is_valid_num(c))
		{
			g_borders[j] = c - '0';
			j++;
		}
		i++;
		c = str[i];
	}
}
