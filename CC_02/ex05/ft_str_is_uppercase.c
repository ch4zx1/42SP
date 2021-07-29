/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfischer <cfischer@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/25 18:08:42 by cfischer          #+#    #+#             */
/*   Updated: 2021/07/25 18:08:43 by cfischer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_str_is_uppercase(char *str)
{
	unsigned int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
		return(0);
		i++;
	}	
	return(1);
}