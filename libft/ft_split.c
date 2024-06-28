/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcraciun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 18:01:53 by lcraciun          #+#    #+#             */
/*   Updated: 2024/06/28 21:02:03 by lcraciun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <unistd.h>

char	**ft_split(char const *s, char c)
{
	char const	*st;
	char const	*last_delimiter;
	//char const	*last_delimiter;
	//char		**result;
	//char		**begin;
	//int		words;
	
	last_delimiter = s;
	st = s;
	//begin = result;
	printf("%c", c);
	while (*st)
	{
		if (*st == c)
		{
			//printf("%s\n", ft_substr(s, (s - last_delimiter), (s - st)));
			printf("(begin) %ld", (last_delimiter - s));
			printf("(last) [%ld] ", (st - s));
			printf(" [%s] ", ft_substr(s, (int)(last_delimiter - s), (int)(st - s)));
			/*if (st < s)
				printf("%s", ft_substr(s, (int)(last_delimiter - s), (int)(st - s)));*/
			last_delimiter = (st + 1);
		}
		st++;
	}
	return (NULL);
}
/*
int	main(void)
{
	char	**arraydechars;
	char	*textocondelimitador;

	textocondelimitador = "adios,bienvenido,casa,arbol,terraza,abrigo,";
	arraydechars = ft_split(textocondelimitador, ',');
	return (0);
}
*/
