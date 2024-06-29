/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcraciun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 20:17:27 by lcraciun          #+#    #+#             */
/*   Updated: 2024/06/29 18:51:55 by lcraciun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);


#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
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

int	main(void)
{
	char*	frase;

	frase = "Hola bienvenidos a todos, un gusto conocerlos!";
	ft_putstr(frase);
	return (0);
}

