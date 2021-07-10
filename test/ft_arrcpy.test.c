#include <stdlib.h>
#include <stdio.h>

int 	*create_array(int size);
int		get_array_size(int *array);
int		ft_arradd(int src, int *dest);
void	ft_arrcpy(int *src, int *dest);

int	main(void)
{
	int	*array_created;
	int	*other_array;

	array_created = create_array(5);
	ft_arradd(55, array_created);
	ft_arradd(127, array_created);
	other_array = create_array(5);
	ft_arrcpy(array_created, other_array);
	printf("%d\n", other_array[1]);
	printf("%d\n", get_array_size(other_array));
}
