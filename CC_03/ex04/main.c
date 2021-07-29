/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfischer <cfischer@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 02:24:58 by cfischer          #+#    #+#             */
/*   Updated: 2021/07/28 02:48:13 by cfischer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

char	*ft_strstr(char *str, char *to_find);

int	main()
{
	char str[] = "paoxuxualface";
	char fnd[] = "xuxu";
	printf("%s", ft_strstr(str, fnd));
	return (0);
}
