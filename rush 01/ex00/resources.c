#include <unistd.h>

void	put_char(char c)
{
	write(1, &c, 1);
}

void	put_str(const char *str, int len)
{
	int		i;
	char	c;

	c = str[0];
	i = 1;
	while (c != '\0' && i <= len)
	{
		put_char(c);
		c = str[i];
		i++;
	}
}

void	put_num_as_char(int num)
{
	char	c;

	c = num + '0';
	put_char(c);
}

int		count_str_len(char *str)
{
	int		overflow;
	int		len;
	char	c;

	c = str[0];
	len = 1;
	overflow = 100;
	while (c != '\0' && len < overflow)
	{
		c = str[len];
		len++;
	}
	return (len);
}

int		show_error(void)
{
	write(1, "Error\n", 6);
	return (2);
}
