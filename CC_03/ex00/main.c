/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfischer <cfischer@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 17:02:01 by cfischer          #+#    #+#             */
/*   Updated: 2021/07/27 17:28:05 by cfischer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>

int ft_strcmp(char *s1, char *s2);

int	main(void)
{
	char *s1;
	char *s2;
	
	s1 = "abcd";
	s2 = "abcdv";
	printf("s1: %s, s2: %s\n", s1, s2);
	printf("%d\n", ft_strcmp(s1, s2));
	return(0);
}
