#include <stdlib.h>
#include <stdio.h>

int *create_array(int size);
int	get_array_size(int *array);
int	ft_arradd(int src, int *dest);

int	main(void)
{
	int	*array_created;

	array_created = create_array(5);
	printf("%d\n", get_array_size(array_created));
	ft_arradd(55, array_created);
	ft_arradd(127, array_created);
	printf("%d\n", get_array_size(array_created));
}
