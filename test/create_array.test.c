#include <stdlib.h>
#include <stdio.h>

int *create_array(int size);

int	main(void)
{
	int	*array_created;
	
	array_created = create_array(5);
	printf("%d\n", array_created[0]);
}
