/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfischer <cfischer@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/25 17:46:35 by cfischer          #+#    #+#             */
/*   Updated: 2021/07/25 17:57:17 by cfischer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_str_is_numeric(char *str);

int	main(void)
{
	char *str;

	str = malloc(sizeof(char));
	str = "13231hg32";
	printf("%d\n", ft_str_is_numeric(str));
	return (0);
}
