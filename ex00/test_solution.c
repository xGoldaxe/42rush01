/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_solution.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleveque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 17:25:57 by pleveque          #+#    #+#             */
/*   Updated: 2021/07/11 13:01:17 by pleveque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*create_array(int size);
int		get_array_size(int *array);
void	ft_arrcpy(int *src, int *dest);
int		ft_arrinclude(int *array, int test);
int		ft_graduation_value(int *array_values);
void	ft_arradd(int src, int *dest);

int	test_border(int *values, int *bor, int pos, int po)
{
	int	size;

	size = get_array_size(bor) / 4;
	if (get_array_size(values) == size)
	{
		if (ft_graduation_value(values) == bor[(size * pos) + po]
			&& ft_graduation_value(values) == bor[(size * (pos + 1)) + po])
			return (1);
	}
	else
	{
		if (ft_graduation_value(values) <= bor[(size * pos) + po]
			&& ft_graduation_value(values) <= bor[(size * (pos + 1)) + po])
			return (1);
	}
	return (0);
}

int	test_line(int *solution, int *border_value, int size, int index)
{
	int	*values_on_line;
	int	value_line;
	int	result;

	values_on_line = create_array(size + 1);
	value_line = (get_array_size(solution) + 1) / size;
	ft_arrcpy(&solution[value_line], values_on_line);
	if (ft_arrinclude(values_on_line, index) == 1)
	{
		return (0);
	}
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
	value_column = (get_array_size(solution) + 1) % size;
	value_line = (get_array_size(solution) + 1) / size;
	i = 0;
	while (value_line > i)
	{
		ft_arradd(solution[(i * size) + value_column], values_on_column);
		i++;
	}
	if (ft_arrinclude(values_on_column, index) == 1)
		return (0);
	ft_arradd(index, values_on_column);
	result = test_border(values_on_column, border_value, 0, value_column);
	free(values_on_column);
	return (result);
}

int	test_value(int *solution, int *border_value, int size, int index)
{
	if (test_line(solution, border_value, size, index) == 0)
		return (0);
	if (test_column(solution, border_value, size, index) == 0)
		return (0);
	return (1);
}

int	*test_solution(int *solution, int *border_value, int size)
{
	int	i;
	int	*all_possible;

	all_possible = create_array(size + 1);
	i = 1;
	while (i <= size)
	{
		if (test_value(solution, border_value, size, i))
			ft_arradd(i, all_possible);
		i++;
	}
	return (all_possible);
}
