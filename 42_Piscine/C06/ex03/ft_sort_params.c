/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pseguign <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 16:18:51 by pseguign          #+#    #+#             */
/*   Updated: 2023/08/31 16:18:57 by pseguign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_printstr(int argc, char *argv[])
{
	int		i;
	int		j;
	char	c;

	j = 1;
	while (j <= argc - 1)
	{
		i = 0;
		while (argv[j][i] != '\0')
		{
			c = argv[j][i];
			write (1, &c, 1);
			i++;
		}
		write (1, "\n", 1);
		j++;
	}
}

int	ft_strcmp(char *argv1, char *argv2)
{
	int	i;

	i = 0;
	while (argv1[i] != '\0' || argv2[i] != '\0')
	{
		if (argv1[i] == argv2[i])
			i++;
		else
			return (argv1[i] - argv2[i]);
	}
	return (0);
}

void	ft_swap(char **argv1, char **argv2)
{
	char	*temp;

	temp = *argv1;
	*argv1 = *argv2;
	*argv2 = temp;
}

int	main(int argc, char *argv[])
{
	int	i;
	int	j;

	i = 1;
	while (i < argc)
	{
		j = i + 1;
		while (j < argc)
		{
			if (ft_strcmp(argv[i], argv[j]) > 0)
			{
				ft_swap(&argv[i], &argv[j]);
			}
			j++;
		}
		i++;
	}
	ft_printstr(argc, argv);
}
