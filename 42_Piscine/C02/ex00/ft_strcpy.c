/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pseguign <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 20:22:13 by pseguign          #+#    #+#             */
/*   Updated: 2023/08/15 20:37:38 by pseguign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	start;

	start = 0;
	while (src[start] != '\0')
	{
		dest[start] = src[start];
		start++;
	}
	dest[start] = '\0';
	return (dest);
}
