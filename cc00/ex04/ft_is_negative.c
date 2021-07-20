#include<unistd.h>

void	ft_putchar(char c);


void    ft_is_negative(int n)
{
    if (n >= 0)
    {
        ft_putchar('P');
    }
    else if (n < 0)
    {
        ft_putchar('N');
    }
}

int main (void)
{
    int u;
    u = 0;

	ft_is_negative(u);
	return (0);
}