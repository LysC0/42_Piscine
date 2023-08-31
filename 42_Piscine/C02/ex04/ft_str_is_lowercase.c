/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pseguign <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 17:21:56 by pseguign          #+#    #+#             */
/*   Updated: 2023/08/16 17:44:22 by pseguign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	start;

	start = 0;
	while (str[start] != 0)
	{
		if (str[start] < 97 || str[start] > 122)
		{
			return (0);
		}
		start++;
	}
	return (1);
}
