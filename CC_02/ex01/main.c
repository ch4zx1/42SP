/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfischer <cfischer@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/25 17:43:39 by cfischer          #+#    #+#             */
/*   Updated: 2021/07/25 17:43:40 by cfischer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int main(void)
{
	unsigned int n;
	char *src;
	char *dest;

	n = 8;
	src = malloc(sizeof(char));
	src = "testdsadasde";
	dest = malloc(sizeof(char));
	ft_strncpy(dest, src, n);
	printf("%s\n", dest);
	return (0);
}