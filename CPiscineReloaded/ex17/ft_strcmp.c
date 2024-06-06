#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return ((unsigned char)*s1 - (unsigned char)*s2);
}

void	main(void)
{
	char	*text1;
	char	*text2;

	text1 = "Hola mundo!";
	text2 = "Hola mundo!";
	printf("%d", ft_strcmp(text1, text2));
}
