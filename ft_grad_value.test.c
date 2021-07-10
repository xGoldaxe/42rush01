#include <stdio.h>
int ft_graduation_value(int *array_values);

int *create_array(int size);
void	ft_arradd(int src, int *dest);

int main()
{
	int *arrtest;

	arrtest = create_array(5);
	ft_arradd(3, arrtest);
	ft_arradd(2, arrtest);
	ft_arradd(5, arrtest);
	ft_arradd(6, arrtest);

	printf("hey");
	//printf("%d \n", ft_graduation_value(arrtest));
}
