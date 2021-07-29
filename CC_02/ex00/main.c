/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfischer <cfischer@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/25 17:43:34 by cfischer          #+#    #+#             */
/*   Updated: 2021/07/25 17:43:35 by cfischer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strcpy(char *dest, char *src);

int main(void)
{
	char *src;
	char *dest;

	src = malloc(sizeof(char));
	src = "01234567894234233242";
	dest = malloc(sizeof(char));
	ft_strcpy(dest, src);	
	printf("%s\n", dest);
	return (0);
}