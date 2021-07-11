/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_array.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleveque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 15:55:05 by pleveque          #+#    #+#             */
/*   Updated: 2021/07/11 15:12:22 by pleveque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*create_array(int size)
{
	int	*result;

	result = (int *)malloc(sizeof(int) * size);
	if (!result)
	{
		printf("==========>error malloc<=============\n");
		result = NULL;
		return (result);
	}
	result[0] = -1;
	return (result);
}
