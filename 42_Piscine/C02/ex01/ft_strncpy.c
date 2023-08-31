/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pseguign <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 20:41:44 by pseguign          #+#    #+#             */
/*   Updated: 2023/08/15 20:43:00 by pseguign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	start;

	start = 0;
	while (src[start] != '\0' && start < n)
	{
		dest[start] = src[start];
		start++;
	}
	while (start < n)
	{
		dest[start] = '\0';
		start++;
	}
	return (dest);
}
