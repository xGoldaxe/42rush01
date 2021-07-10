/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_solution.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleveque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 17:25:57 by pleveque          #+#    #+#             */
/*   Updated: 2021/07/10 19:21:24 by pleveque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		*create_array(int size);
int		get_array_size(int *array);
void	ft_arrcpy(int *src, int *dest);
int		ft_arrinclude(int *array, int test);
int 	ft_graduation_value(int *array_values);
void	ft_arradd(int src, int *dest);


int test_line(int *solution, int *border_value, int size, int index)
{
	int *values_on_line;
	int value_line;
	
	values_on_line = create_array(size + 1);
	value_line = (get_array_size(solution) + 1) / size;
	ft_arrcpy(solution[value_line], values_on_line);
	if (ft_arrinclude(values_on_line, index) == 1)
		return (0);
	ft_arradd(index, value_line);
	if (get_array_size(value_line) == size)
	{
		if (ft_graduation_value(value_line) == border_value[(size * 2) + value_line]
			&& ft_graduation_value(value_line) == border_value[(size * 3) + value_line])

	}
}

int *test_value(int *solution, int *border_value, int size, int index)
{
	if (test_line(solution, border_value, size, index) == 0)
		return (0);
}

int	*test_solution(int *solution, int *border_value, int size)
{
	int	i;
	int *all_possible;
	
	all_possible = create_array(size + 1);
	i = 1;

	while (i <= size)
	{
		
	}
}
