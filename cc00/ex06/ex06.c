#include <unistd.h>

void	ft_print_comb2(void)
{
	int		n1;
	int		n2;
	char	c;

	write(1, "00 01", 5);
	n1 = 0;
	n2 = 2;
	while (n1 < 100 && n2 < 100)
	{
		write(1, ", ", 2);
		c = n1 / 10 + '0';
		write(1, &c, 1);
		c = n1 % 10 + '0';
		write(1, &c, 1);
		write(1, " ", 1);
		c = n2 / 10 + '0';
		write(1, &c, 1);
		c = n2 % 10 + '0';
		write(1, &c, 1);
		++n2;
		if (n2 == 100)
		{
			n2 = ++n1 + 1;
		}
	}
}
