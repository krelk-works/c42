#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int temporal;

	temporal = *a;
	*a = *b;
	*b = temporal;
}

void	main(void)
{
	int num_1;
	int num_2;

	num_1 = 1;
	num_2 = 2;

	printf("%d - %d", num_1, num_2);
	ft_swap(&num_1, &num_2);
	printf("%d - %d", num_1, num_2);
}
