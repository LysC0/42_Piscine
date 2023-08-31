/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pseguign <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 18:11:02 by pseguign          #+#    #+#             */
/*   Updated: 2023/08/16 18:26:02 by pseguign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	start;

	start = 0;
	while (str[start] != '\0')
	{
		if (str[start] < 32 || str[start] > 126)
		{
			return (0);
		}
		start++;
	}
	return (1);
}
