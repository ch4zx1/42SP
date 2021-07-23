/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfischer <cfischer@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/21 19:27:33 by cfischer          #+#    #+#             */
/*   Updated: 2021/07/22 17:48:37 by cfischer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	a;
	int	b;

	a = 0;
	size--;
	while (a < size)
	{
		b = tab[a];
		tab[a] = tab[size];
		tab[size] = b;
		a++;
		size--;
	}
}
