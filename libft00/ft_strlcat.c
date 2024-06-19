/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcraciun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 16:20:01 by lcraciun          #+#    #+#             */
/*   Updated: 2024/06/19 16:50:56 by lcraciun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	const char	*s;
	char		*d;
	size_t		n;
	size_t		dlen;

	d = dest;
	n = size;
	while (n && *d)
	{
		d++;
		n--;
	}
	dlen = d - dest;
	n = size - dlen;
	if (n == 0)
		return (dlen + ft_strlen(src));
	s = src;
	while (*s)
	{
		if (n != 1)
		{
			*d = *s;
			d++;
			n--;
		}
		s++;
	}
	*d = '\0';
	return (dlen + (s - src));
}
