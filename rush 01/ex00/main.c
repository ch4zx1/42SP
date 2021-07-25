#include "main_facade.h"
#define ALLOWED_ARGS	2

int		g_borders[16];

int		main(int argc, char **argv)
{
	char	*filtered_args;

	if (argc != ALLOWED_ARGS)
		return (show_error());
	filtered_args = filter_args(argv);
	if (!ft_is_valid_argument(filtered_args))
		return (show_error());
	parse_arguments(filtered_args);
	return (solve_board());
}
