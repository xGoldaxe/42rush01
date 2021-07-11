/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arrinclude.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleveque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 17:53:08 by pleveque          #+#    #+#             */
/*   Updated: 2021/07/11 16:22:27 by pleveque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_arrinclude(int *array, int test)
{
	int	i;

	i = 0;
	while (array[i] != -1)
	{
		if (test == array[i])
			return (1);
		i++;
	}
	return (0);
}
