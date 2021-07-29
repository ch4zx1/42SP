/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfischer <cfischer@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/25 18:12:08 by cfischer          #+#    #+#             */
/*   Updated: 2021/07/26 19:08:50 by cfischer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_str_is_printable(char *str);

int	main(void)
{
	char *str;

	str = malloc(sizeof(char));
	str = "ABCDEFGH1212~";
	printf("%d\n", ft_str_is_printable(str));
	return (0);
}