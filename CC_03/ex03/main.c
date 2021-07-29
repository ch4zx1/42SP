/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfischer <cfischer@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 13:52:53 by cfischer          #+#    #+#             */
/*   Updated: 2021/07/29 13:52:54 by cfischer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

char *ft_strncat(char *dest, char *src, unsigned int nb);

int main(void)
{
	char	src[] = "oi";
	char	dest[] = " bb";

	printf("Retorno: %s\n", ft_strncat(src, dest, 4));
}