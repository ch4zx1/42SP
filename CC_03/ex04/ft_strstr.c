/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfischer <cfischer@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 02:30:26 by cfischer          #+#    #+#             */
/*   Updated: 2021/07/28 19:24:31 by cfischer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int len;
	int i;
	int j;

	len = 0;
	while (to_find[len])
	{
		len++;
	}
	if (len == 0)
	{
		return (str);
	}
	i = 0;
	j = 0;
	while (str[i])
	{
		while (to_find[j] == str[i + j])
		{
			if (j + 1 == len)
			{
				return (str + i);
			}
			j++;
		}
		j = 0;
		i++;
	}
	return(0);
}
