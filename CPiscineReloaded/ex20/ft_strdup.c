/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcraciun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 19:38:35 by lcraciun          #+#    #+#             */
/*   Updated: 2024/06/08 20:00:03 by lcraciun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putstr(char *str)
{
	char	actual_char;

	while (*str != '\0')
	{
		actual_char = *str;
		ft_putchar((actual_char));
		str++;
	}
}

int	ft_strlen(char *str)
{
	int	lenght;

	lenght = 0;
	while (*str != '\0')
	{
		lenght++;
		str++;
	}
	return (lenght);
}

char	*ft_strdup(char *src)
{
	char	*new_str;

	new_str = malloc(ft_strlen(src) * sizeof(char));
	while (*src != '\0')
	{
		*new_str = *src;
		src++;
		new_str++;
	}
	new_str++;
	*new_str = '\0';
	return (new_str);
}

int	main(void)
{
	char	*temp;
	char	*dup;

	temp = "Una frase";
	dup = ft_strdup(temp);
	ft_putstr(dup);
}
