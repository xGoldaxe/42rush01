/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_solution.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleveque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 17:25:57 by pleveque          #+#    #+#             */
/*   Updated: 2021/07/11 18:45:33 by pleveque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		*create_array(int size);
int		get_array_size(int *array);
void	ft_arrcpy(int *src, int *dest);
int		ft_arrinclude(int *array, int test);
int		ft_graduation_value(int *array_values);
void	ft_arradd(int src, int *dest);
int		*ft_arrreverse(int *array);

int	test_border(int *values, int *bor, int pos, int po)
{
	int	result;
	int	size;
	int	*reversed;
	reversed = create_array(get_array_size(values) + 1);
	ft_arrcpy(values, reversed);
	ft_arrreverse(reversed);

	size = get_array_size(bor) / 4;
	result = 0;
	//printf("%d %d %d %d\n", values[0], values[1], values[2], values[3]);
	//printf("%d %d %d %d\n", reversed[0], reversed[1], reversed[2], reversed[3]);
	//printf("left:%d, right:%d\n",ft_graduation_value(values),ft_graduation_value(reversed));
	if (get_array_size(values) == size)
	{
		if (ft_graduation_value(values) == bor[(size * pos) + po]
			&& ft_graduation_value(reversed) == bor[(size * (pos + 1)) + po])
			result = 1;
	}
	else
	{
		if (ft_graduation_value(values) <= bor[(size * pos) + po]
			&& ft_graduation_value(reversed) <= bor[(size * (pos + 1)) + po])
			result = 1;
	}
	free(reversed);
	return result;
}

int	test_line(int *solution, int *border_value, int size, int index)
{
	int	*values_on_line;
	int	value_line;
	int	result;

	values_on_line = create_array(size + 1);
	value_line = (get_array_size(solution)) / size;
	ft_arrcpy(&solution[value_line * size], values_on_line);
	if (ft_arrinclude(values_on_line, index) == 1)
		return (0);
	ft_arradd(index, values_on_line);
	result = test_border(values_on_line, border_value, 2, value_line);
	free(values_on_line);
	return (result);
}

int	test_column(int *solution, int *border_value, int size, int index)
{
	int	*values_on_column;
	int	value_column;
	int	value_line;
	int	i;
	int	result;

	values_on_column = create_array(size + 1);
	value_column = (get_array_size(solution)) % size;
	value_line = (get_array_size(solution)) / size;
	i = 0;
	while (value_line > i)
	{
		ft_arradd(solution[(i * size) + value_column], values_on_column);
		i++;
	}
	if (ft_arrinclude(values_on_column, index) == 1)
	{
		return (0);
	}
	ft_arradd(index, values_on_column);
	result = test_border(values_on_column, border_value, 0, value_column);
	free(values_on_column);
	return (result);
}

int	test_value(int *solution, int *border_value, int size, int index)
{
	if (test_line(solution, border_value, size, index) == 0)
	{
		//printf("line %d\n", index);
		return (0);
	}
	if (test_column(solution, border_value, size, index) == 0)
	{
		//printf("col %d\n", index);
		return (0);
	}
	return (1);
}

int	*test_solution(int *solution, int *border_value, int size)
{
	int	i;
	int	*all_possible;
	int	*modif_solution;

	all_possible = create_array(size + 1);
	i = 1;
	modif_solution = create_array(get_array_size(solution) + 1);
	ft_arrcpy(solution, modif_solution);
	while (i <= size)
	{
		if (test_value(modif_solution, border_value, size, i))
		{
			ft_arradd(i, all_possible);
		}
		i++;
	}
	free(modif_solution);
	return (all_possible);
}
