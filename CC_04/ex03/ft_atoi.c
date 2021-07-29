/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfischer <cfischer@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 06:40:33 by cfischer          #+#    #+#             */
/*   Updated: 2021/07/28 06:48:35 by cfischer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	sign;
	int	num;

	while (*str <= 32)
	{
		str++;
	}
	sign = 1;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
		{
			sign = -sign;
		}
		++str;
	}
	num = 0;
	while (*str <= '9' && *str >= '0')
	{
		num *= 10;
		num += *str - 48;
		str++;
	}
	return (num * sign);
}
