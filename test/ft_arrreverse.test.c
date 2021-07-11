#include <stdio.h>

int	ft_arrreverse(int *array);
int	*create_array(int size);
void	ft_arradd(int src, int *dest);

int	main(void)
{
	int	*test;

	test = create_array(6);
	ft_arradd(1, test);
	ft_arradd(2, test);
	ft_arradd(3, test);
	ft_arradd(4, test);
	ft_arradd(5, test);

	ft_arrreverse(test);
	printf("salut\n");
	printf("%d, %d, %d, %d, %d\n", test[0], test[1], test[2], test[3], test[4]);
}
