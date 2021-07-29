/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfischer <cfischer@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/25 18:16:44 by cfischer          #+#    #+#             */
/*   Updated: 2021/07/25 18:17:48 by cfischer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
char	*ft_strupcase(char *str);

int	main(void)
{
	char str[] = "dasiudhaud";
	ft_strupcase(str);
	printf("%s\n", str);
	return (0);
}
