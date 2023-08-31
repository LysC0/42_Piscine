/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pseguign <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 18:40:22 by pseguign          #+#    #+#             */
/*   Updated: 2023/08/16 18:40:24 by pseguign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	start;

	start = 0;
	while (str[start] != '\0')
	{
		if (str[start] > 96 && str[start] < 123)
		{
			str[start] = str[start] - 32;
		}
		start++;
	}
	return (str);
}
