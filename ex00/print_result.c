/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_result.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleveque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 22:10:11 by pleveque          #+#    #+#             */
/*   Updated: 2021/07/11 22:27:29 by pleveque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_result(int *result, int size)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < (size * size))
	{
		ft_putchar(result[i] + '0');
		if ((i % size) != (size - 1))
			write(1, " ", 1);
		else
			write(1, "\n", 1);
		i++;
	}
}
