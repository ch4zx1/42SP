/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfischer <cfischer@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/25 18:20:03 by cfischer          #+#    #+#             */
/*   Updated: 2021/07/25 18:22:30 by cfischer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
char	*ft_strlowcase(char *str);

int	main(void)
{
	char str[] = "ASAHSYGY";
	ft_strlowcase(str);
	printf("%s\n", str);
	return (0);
}
