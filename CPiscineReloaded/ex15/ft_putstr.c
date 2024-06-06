#include <unistd.h>
#include <stdio.h>

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		//printf("%c", &str);
		*str++;
	}
}

void	main(void)
{
	char*	frase;

	frase = "Hola bienvenidos a todos, un gusto conocerlos!";
	ft_putstr(frase);
}
