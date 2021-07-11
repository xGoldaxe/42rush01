
#include <stdio.h>

int	*create_array(int size);
int	*get_solution(int *solution, int *border_value, int size);
void	ft_arradd(int src, int *dest);

int main()
{
	int 	*solutions;
	int		*border_value;
	char	tab[17] = "4321122243211222";
	int 	i;
	int		*result;

	border_value = create_array(16 + 1);
	solutions = create_array(16 + 1);
	i = 0;
	while (i < 16)
	{
		ft_arradd(tab[i], border_value);
		i++;
	}
	result = get_solution(solutions, border_value, 4);
	printf("%d\n", result[0]);
	printf("%d\n", result[1]);
	printf("%d\n", result[2]);
	printf("%d\n", result[3]);
}
