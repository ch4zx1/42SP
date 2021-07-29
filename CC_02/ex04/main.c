/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfischer <cfischer@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/25 18:06:18 by cfischer          #+#    #+#             */
/*   Updated: 2021/07/25 18:07:29 by cfischer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_str_is_lowercase(char *str);

int	main(void)
{
	char *str;
	
	str = malloc(sizeof(char));
	str = "abc2defghi";
	printf("%d\n", ft_str_is_lowercase(str));
	return (0);
}
