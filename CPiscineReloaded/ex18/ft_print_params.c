#include <stdio.h>

void	ft_putchar(char c);

void	main(int argc, char *argv[])
{
	/*int	pos;

	pos = 0;
	while (pos < argc)
	{
		ft_putchar(argv[pos]);
		pos++;
	}*/

	//printf("%d", argc);
	//printf("%s", argv[1]);
	
	int	pos_param;

	pos_param = 1;
	if (argc > 1)
	{
		while (argc > pos_param)
		{
			char	*current_param;

			current_param = argv[pos_param];
			while (*current_param != '\0')
			{
				ft_putchar(*current_param);
				current_param++;
			}
			ft_putchar('\n');
			pos_param++;
		}
	}
}
