/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcraciun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 18:02:58 by lcraciun          #+#    #+#             */
/*   Updated: 2024/06/24 19:17:04 by lcraciun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	char	*begin;

	substr = (char *)malloc(sizeof(char) * len + 1);
	begin = substr;
	if (len == 0 || !substr)
	{
		if (substr != NULL)
			free(substr);
		return (NULL);
	}
	while (len > 0 && s[start] != '\0')
	{
		*substr = s[start];
		substr++;
		start++;
		len--;
	}
	if (len > 0)
	{
		free(begin);
		return (NULL);
	}
	return (begin);
}
/*
int	main(void)
{
	char	*texto;
	char	*substr;

	texto = "Hola mundooo";
	substr = ft_substr(texto, 0, 10);
	printf("%s", substr);
	free(substr);
}
*/
