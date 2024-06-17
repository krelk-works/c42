/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcraciun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 16:32:55 by lcraciun          #+#    #+#             */
/*   Updated: 2024/06/17 21:26:37 by lcraciun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char	c;
	char	*text;

	text = "Hola mundo!";
	printf("Inserta una letra :");
	scanf("%c", &c);
	if (ft_isalpha(c))
		printf("Es una letra del alfabeto\n");
	else
		printf("No es una letra del alfabeto\n");
	if (ft_isdigit(c))
		printf("Es un numero\n");
	else
		printf("No es un numero\n");
	if (ft_isalnum(c))
		printf("Es un simbolo alfanumerico\n");
	if (ft_isascii(c))
		printf("Es un simbolo de la tabla ASCI\n");
	if (ft_isprint(c))
		printf("Es un caracter printable\n");
	printf("La longitud de la variable char *text es de %zu caracteres.\n", ft_strlen(text));
}
