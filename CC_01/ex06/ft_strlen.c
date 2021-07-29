/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfischer <cfischer@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/21 18:57:29 by cfischer          #+#    #+#             */
/*   Updated: 2021/07/23 13:10:29 by cfischer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_strlen(char *str)
{
	int c;

	c = 0;
	while (str[c] != '\0')
	{
		c++;
	}
	return (c);
}


int	ft_strlen(char *str);

int	main(void)
{
	char str[] = "aaaaaaaaaaaaaaaaaaaaaaaaa";
	
	int c = ft_strlen(str);
	
	printf("%d\n", c);
}
