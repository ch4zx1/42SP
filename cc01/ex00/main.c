/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfischer <cfischer@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/21 12:26:21 by cfischer          #+#    #+#             */
/*   Updated: 2021/07/21 15:54:47 by cfischer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

void	ft_ft(int *nbr);

int	main(void)
{
	int	nbr;

	ft_ft(&nbr);
	printf("%d", nbr);
	return (0);
}