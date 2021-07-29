/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfischer <cfischer@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 13:58:09 by cfischer          #+#    #+#             */
/*   Updated: 2021/07/19 13:58:10 by cfischer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c);

void	ft_is_negative(int n)
{
	if (n > 0)
	{
		ft_putchar('P');
	}
	else if (n < 0)
	{
		ft_putchar('N');
	}
}
