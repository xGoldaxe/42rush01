/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_graduation_value.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleveque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 18:11:47 by pleveque          #+#    #+#             */
/*   Updated: 2021/07/11 12:44:23 by pleveque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_graduation_value(int *array_values)
{
	int	i;
	int	views;
	int	ref;

	i = 0;
	ref = array_values[0];
	views = 1;
	while (array_values[i] != -1)
	{
		if (ref < array_values[i + 1])
		{
			views++;
			ref = array_values[i + 1];
		}
		i++;
	}
	return (views);
}
