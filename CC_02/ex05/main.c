#include <stdio.h>
#include <stdlib.h>

int	ft_str_is_uppercase(char *str);

int	main(void)
{
	char *str;
	
	str = malloc(sizeof(char));
	str = "ABCDED";
	printf("%d\n", ft_str_is_uppercase(str));
	return (0);
}
