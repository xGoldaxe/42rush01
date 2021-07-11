#include <stdio.h>

int	*create_array(int size);
int	*get_solution(int *border_value, int size);
void	ft_arradd(int src, int *dest);
void	print_solution(int *solution, int size);

int main()
{
	int 	*solutions;
	int		*border_value;
	char	tab[20] = "42123143223232134122";
	int 	i;
	int		*result;

	border_value = create_array(20 + 1);
	solutions = create_array(20 + 1);
	i = 0;
	while (i < 20)
	{
		ft_arradd(tab[i] - '0', border_value);
		i++;
	}
	result = get_solution( border_value, 5);
	printf("RESULT ::::\n");
	print_solution(result, 5);
}
