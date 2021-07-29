void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	column;
	int	line;

	line = 1;
	while (line <= y)
	{
		column = 1;
		while (column <= x)
		{
			if ((column == 1 && line == 1) || (column == x && line == 1))
				ft_putchar('A');
			else if ((column == 1 && line == y) || (column == x && line == y))
				ft_putchar('C');
			else if (column == 1 || column == x || line == 1 || line == y)
				ft_putchar('B');
			else
				ft_putchar(' ');
			column++;
		}
		line++;
		ft_putchar('\n');
	}	
}
