/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcraciun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 16:43:37 by lcraciun          #+#    #+#             */
/*   Updated: 2024/06/21 18:10:10 by lcraciun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_matchstring(char *big, char *little, size_t len)
{
	char	*tbig;
	char	*tlittle;

	tbig = (char *)big;
	tlittle = (char *)little;
	while (len > 0 && *tbig != '\0' && *tlittle != '\0')
	{
		if (*tbig == *tlittle)
			len--;
		tbig++;
		tlittle++;
	}
	if (len == 0)
		return (1);
	else
		return (0);
}

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	const char	*tbig;
	const char	*tlittle;

	tbig = (const char *)big;
	tlittle = (const char *)little;
	if (!little)
		return ((char *)tbig);
	while (*tbig != '\0')
	{
		if (*tbig == *tlittle)
		{
			if (ft_matchstring((char *)tbig, (char *)tlittle, len))
			{
				return ((char *)tbig);
			}
		}
		tbig++;
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
