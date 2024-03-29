/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pseguign <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 15:00:08 by pseguign          #+#    #+#             */
/*   Updated: 2023/08/15 15:00:12 by pseguign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	compteur;

	compteur = 0;
	while (compteur[str] != '\0')
	{
		compteur++;
	}
	return (compteur);
}
