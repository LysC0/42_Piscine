/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pseguign <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 17:54:49 by pseguign          #+#    #+#             */
/*   Updated: 2023/08/16 18:09:14 by pseguign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	start;

	start = 0;
	while (str[start] != 0)
	{
		if (str[start] < 65 || str[start] > 90)
		{
			return (0);
		}
		start++;
	}
	return (1);
}
