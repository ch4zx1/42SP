/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfischer <cfischer@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/25 17:42:25 by cfischer          #+#    #+#             */
/*   Updated: 2021/07/26 19:03:18 by cfischer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_str_is_alpha(char *str);

int	main(void)
{
	char *str;

	str = malloc(sizeof(char));
	str = "asdajdhsaui";
	printf("%d\n", ft_str_is_alpha(str));
	return (0);
}
