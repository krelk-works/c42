/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcraciun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 15:54:59 by lcraciun          #+#    #+#             */
/*   Updated: 2024/06/19 16:08:32 by lcraciun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	const char	*s;
	size_t		n;

	s = src;
	n = size;
	if (n)
	{
		while (n)
		{
			*dest = *s;
			dest++;
			s++;
			n--;
		}
		if (!n && size)
			*dest = '\0';
	}
	while (*s)
		s++;
	return (s - src - 1);
}
