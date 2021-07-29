/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfischer <cfischer@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 13:51:38 by cfischer          #+#    #+#             */
/*   Updated: 2021/07/29 13:51:39 by cfischer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int		ft_strncmp(char *s1, char *s2, unsigned int n);

int	main(void)
{
	char	*s1 = "ac";
	char	*s2 = "a";

	printf("Original: %d\n", strncmp(s1, s2, 10));
	printf("Fake: %d\n", ft_strncmp(s1, s2, 10));
}
