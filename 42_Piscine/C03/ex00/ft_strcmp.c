/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pseguign <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 17:55:59 by pseguign          #+#    #+#             */
/*   Updated: 2023/08/17 17:56:07 by pseguign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	start;

	start = 0;
	while (s1[start] == s2[start] && s1[start] != '\0' && s2[start] != '\0')
	{
		start++;
	}
	return (s1[start] - s2[start]);
}
