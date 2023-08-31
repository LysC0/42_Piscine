/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asy <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 19:20:38 by asy               #+#    #+#             */
/*   Updated: 2023/08/23 19:20:40 by asy              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int	test;

	test = index;
	if (index == 1)
		return (index);
	if (test < 0)
		return (-1);
	if (test == 0)
		return (index);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
