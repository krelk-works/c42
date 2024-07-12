/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcraciun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 16:43:37 by lcraciun          #+#    #+#             */
/*   Updated: 2024/07/12 20:32:40 by lcraciun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;

	if (*needle == 0)
		return ((char *)haystack);
	i = ft_strlen(needle);
	while (*haystack && i <= len--)
	{
		if (!(ft_strncmp((char *)haystack, (char *)needle, i)))
			return ((char *)haystack);
		haystack++;
	}
	return (NULL);
}
/*
int	main(void)
{
	char	*frase = "Hola mundo";
	char	*busqueda = " mund";

	printf("El tamanyo en bytes del texto a buscar es de %d bytes\n", 5);

	if (ft_strnstr(frase, busqueda, 5))
		printf("existe en el texto\n");
	else
		printf("NO existe en el texto\n");
}
*/
