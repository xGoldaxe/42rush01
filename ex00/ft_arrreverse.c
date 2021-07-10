/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arrreverse.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleveque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 19:23:38 by pleveque          #+#    #+#             */
/*   Updated: 2021/07/10 19:43:53 by pleveque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	get_array_size(int *array);

void	swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int	*ft_arrreverse(int *array)
{
	int i;
	int len_array;
	int rep;

	len_array = get_array_size(array) - 1;
	i = 0;
	rep = (len_array / 2) + len_array % 2;
	while (len_array > i)
	{
		swap(&array[i], &array[len_array - i]);
		i++;
	}
	return (array);
}
