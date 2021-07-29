/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfischer <cfischer@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 13:52:16 by cfischer          #+#    #+#             */
/*   Updated: 2021/07/29 13:52:17 by cfischer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

char *ft_strcat(char *dest, char *src);

int main(void)
{
	char	src[] = "oi";
	char	dest[] = " bb";

	printf("Retorno: %s\n", ft_strcat(src, dest));
}