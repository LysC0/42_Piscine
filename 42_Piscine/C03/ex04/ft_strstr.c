/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pseguign <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 06:34:34 by pseguign          #+#    #+#             */
/*   Updated: 2023/08/22 06:34:42 by pseguign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	j = 0;
	if (to_find[j] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		if (str[i] == to_find[0])
		{
			temp = i;
			while (str[temp] == to_find[j])
			{
				if (!to_find[j + 1])
					return (&str[i]);
				j++;
				temp++;
			}
			j = 0;
		}
		i++;
	}
	return (0);
}
