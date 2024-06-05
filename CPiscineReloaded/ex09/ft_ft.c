#include <stdio.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

void	main(void)
{
	int num;

	num = 12;
	printf("%d", num);
	ft_ft(&num);
	printf("%d", num);
}
