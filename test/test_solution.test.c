#include <stdio.h>

int	*create_array(int size);
int	*test_solution(int *solution, int *border_value, int size);
void	ft_arradd(int src, int *dest);

int main()
{
	int 	*solutions;
	int		*border_value;
	char	tab[17] = "2132221324132122";
	char	sol[17] = "123";
	int 	i;
	int		*result;

	border_value = create_array(16 + 1);
	solutions = create_array(16 + 1);
	i = 0;
	while (i < 16)
	{
		ft_arradd(tab[i] - '0', border_value);
		i++;
	}
	i = 0;
	while (i < 3)
	{
		ft_arradd(sol[i] - '0', solutions);
		i++;
	}
	result = test_solution(solutions, border_value, 4);
	printf("%d\n", result[0]);
	printf("%d\n", result[1]);
	//printf("%d\n", result[2]);
	//printf("%d\n", result[3]);
}
