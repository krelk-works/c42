/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcraciun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 18:01:53 by lcraciun          #+#    #+#             */
/*   Updated: 2024/07/09 21:15:37 by lcraciun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include "ft_strlen.c"
//#include "ft_substr.c"
//#include "ft_strdup.c"
//#include <stdio.h>

static char	**ft_split_alloc_words(char const *s, char c)
{
	char const	*st;
	char		**result;
	int			words;

	st = s;
	words = 0;
	while (*st)
	{
		if (*st == c)
			words++;
		st++;
	}
	if ((words == 0 && st > s) || words > 0)
		words++;
	//printf("Hay %d palabras.\n", words);
	if (words)
	{
		result = (char **)malloc((words + 1) * sizeof(char *));
		if (result)
			return (result);
		else
			return (NULL);
	}
	else
		return (NULL);
}

static void	ft_split_save_words(char const *s, char c, \
		char const *last_delimiter, char **result)
{
	char const	*st;
	int			i;

	st = s;
	i = 0;
	while (*st)
	{
		if (*st == c)
		{
			if ((st - s) - (last_delimiter - s) > 0)
				result[i] = ft_substr(s, (int)(last_delimiter - s), \
						(int)((st - s) - (last_delimiter - s)));
			else
				result[i] = ft_strdup("");
			i++;
			last_delimiter = (st + 1);
		}
		st++;
	}
	if (st > last_delimiter && i)
		result[i] = ft_substr(s, (int)(last_delimiter - s), (int)((st - s) - (last_delimiter - s)));
	if (!i)
		result[i] = ft_substr(s, 0, (int)(st - s));
	if (*(st - 1) == c)
		result[i] = ft_strdup("");
	result[i++] = NULL;
}

char	**ft_split(char const *s, char c)
{
	char const	*last_delimiter;
	char		**result;

	if (ft_strlen(s) == 0 || !c)
		return ((char **)malloc(0));
	last_delimiter = s;
	result = ft_split_alloc_words(s, c);
	if (result)
		ft_split_save_words(s, c, last_delimiter, result);
	else
		return ((char **)malloc(0));
	return (result);
}
/*
int	main(void)
{
	char	**arraydechars;
	char	*textocondelimitador;
	int		i;

	i = 0;
	textocondelimitador = "adios,bienvenido,arbol";
	arraydechars = ft_split(textocondelimitador, ',');
	while (arraydechars[i])
	{
		printf("[%d]\n", i);
		printf("[] %s\n", arraydechars[i]);
		i++;
	}
	return (0);
}
*/
