/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_array.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleveque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 15:55:05 by pleveque          #+#    #+#             */
/*   Updated: 2021/07/11 19:21:13 by pleveque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*create_array(int size)
{
	int	*result;
	int	i;

	result = (int *)malloc(sizeof(int) * size);
	if (!result)
	{
		printf("==========>error malloc<=============\n");
		result = NULL;
		return (result);
	}
	i = 0;
	while (i < size)
	{
		result[i] = 0;
		i++;
	}
	result[0] = -1;
	return (result);
}
