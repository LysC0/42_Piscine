/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pseguign <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 00:58:07 by pseguign          #+#    #+#             */
/*   Updated: 2023/08/16 00:58:11 by pseguign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	start;

	start = 0;
	while (str[start] != '\0')
	{
		if (str[start] < 48 || str[start] > 58)
		{
			return (0);
		}
		start++;
	}
	return (1);
}
