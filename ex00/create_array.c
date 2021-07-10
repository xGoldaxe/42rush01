/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_array.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleveque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 15:55:05 by pleveque          #+#    #+#             */
/*   Updated: 2021/07/10 16:23:28 by pleveque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*create_array(int size)
{
	int	*result;

	result = malloc(sizeof(result) * size);
	result[0] = -1;
	return (result);
}
