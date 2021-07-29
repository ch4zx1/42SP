/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfischer <cfischer@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 11:38:55 by cfischer          #+#    #+#             */
/*   Updated: 2021/07/27 01:05:28 by cfischer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (str[i] != '\0')
	{
		if ((str[i] >= '0' && str[i] <= '9') || (str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
		{
			if (j && (str[i] >= 'a' && str[i] <= 'z'))
			{
				str[i] = str[i] - 32;
			}	
			else if (!j && (str[i] >= 'A' && str[i] <= 'Z'))
			{
				str[i] = str[i] + 32;
			}	
			j = 0;
		}
		else
		{
			j = 1;
		}	
		i++;
	}
	return (str);
}
