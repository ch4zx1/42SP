/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfischer <cfischer@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/21 12:26:21 by cfischer          #+#    #+#             */
/*   Updated: 2021/07/21 13:57:55 by cfischer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

void	ft_ultimate_ft(int *********nbr);

int	main(void)
{
	int	*********nbr8;
	int	********nbr7;
	int	*******nbr6;
	int	******nbr5;
	int	*****nbr4;
	int	****nbr3;
	int	***nbr2;
	int	**nbr1;
	int	*nbr0;
	int	nbr;

	nbr0 = &nbr;
	nbr1 = &nbr0;
	nbr2 = &nbr1;
	nbr3 = &nbr2;
	nbr4 = &nbr3;
	nbr5 = &nbr4;
	nbr6 = &nbr5;
	nbr7 = &nbr6;
	nbr8 = &nbr7;
	ft_ultimate_ft(nbr8);
	printf("%d", nbr);
	return (0);
}
