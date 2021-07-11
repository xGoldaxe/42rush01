/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_solution.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleveque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 14:32:04 by pleveque          #+#    #+#             */
/*   Updated: 2021/07/11 12:58:16 by pleveque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		get_array_size(int *array);
void	ft_arrcpy(int *src, int *dest);
void	ft_arradd(int src, int *dest);
int		*create_array(int size);
int		*test_solution(int *solution, int *border_value, int size);

//we go trough all possible solutions until we reach a solution.
void	get_solution_branch(int *solution, int *border_value, int size, int *dest)
{
	int	actual_case;
	int	number_of_case;
	int	*possible_case;
	int	i;
	int	*new_solution;

	number_of_case = size * size;
	actual_case = get_array_size(solution);
	if (actual_case == number_of_case)
		ft_arrcpy(solution, dest);
	possible_case = test_solution(solution, border_value, size);
	i = 0;
	while ((i < get_array_size(possible_case)) && (get_array_size(dest) == 0))
	{
		new_solution = create_array(number_of_case + 1);
		ft_arrcpy(solution, new_solution);
		ft_arradd(possible_case[i], new_solution);
		get_solution_branch(new_solution, border_value, size, dest);
		free(new_solution);
		i++;
	}
	free(possible_case);
}

int	*get_solution(int *border_value, int size)
{
	int	number_of_case;
	int	*solution;
	int	*dest_arr;

	number_of_case = size * size;
	solution = create_array(number_of_case + 1);
	dest_arr = create_array(number_of_case + 1);
	get_solution_branch(solution, border_value, size, dest_arr);
	free(solution);
	return (dest_arr);
}
