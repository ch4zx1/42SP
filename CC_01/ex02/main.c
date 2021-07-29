/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfischer <cfischer@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/21 14:20:19 by cfischer          #+#    #+#             */
/*   Updated: 2021/07/21 14:22:48 by cfischer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

void	ft_swap(int *a, int *b);

int	main(void)
{
	int	a;
	int	b;

	a = 4;
	b = 6;
	ft_swap(&a, &b);
	printf("a: %d\n", a);
	printf("b: %d\n", b);
	return (0);
}
