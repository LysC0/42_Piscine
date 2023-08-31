/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pseguign <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 23:29:05 by pseguign          #+#    #+#             */
/*   Updated: 2023/08/16 23:38:37 by pseguign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	start;

	start = 0;
	while (str[start] != '\0')
	{
		if (str[start] > 64 && str[start] < 91)
		{
			str[start] = str[start] + 32;
		}
		start++;
	}
	return (str);
}
