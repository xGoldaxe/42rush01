/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleveque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 21:29:50 by pleveque          #+#    #+#             */
/*   Updated: 2021/07/11 22:17:03 by pleveque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		*get_solution(int *border_value, int size);
void	ft_arradd(int src, int *dest);
int		*create_array(int size);
int		*get_solution(int *border_value, int size);
void	print_result(int *result, int size);
int		get_array_size(int *array);

void	show_error(void)
{
	write(1, "Error\n", 6);
}

int	count_number(char *str)
{
	int	expected;
	int	number_of_number;
	int	i;

	i = 0;
 	expected = 0;
    number_of_number = 0;
    while (str[i] != '\0')
    {
        if ((expected == 0) && (str[i] >= '0' && str[i] <= '9'))
        {
            number_of_number++;
            expected = 1;
        }
        else if (expected == 1 && str[i] == ' ')
            expected = 0;
        else
            return (-1);
        i++;
    }
    if (expected == 0)
        return (-1);
	return (number_of_number);
}

int	*stock_numbers(char *str, int *dest)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
			ft_arradd(str[i] - '0' , dest);
		i++;
	}
	return (dest);
}

int	main(int argc, char **argv)
{
	int	*result;
	int	number_of_number;
	int	size;
	int	*numbers;

	if (argc != 2)
	{
		show_error();
		return (0);
	}
	number_of_number = count_number(argv[1]);
	if (number_of_number == -1)
	{
		show_error();
		return (0);
	}
	size = number_of_number / 4;
	if (number_of_number < 4)
	{
		show_error();
		return (0);
	}
	numbers = create_array(number_of_number + 1);
	numbers = stock_numbers(argv[1], numbers);
	result = get_solution(numbers, size);
	if (get_array_size(result) == 0)
		show_error();
	else
		print_result(result, size);
}
