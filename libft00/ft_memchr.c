/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcraciun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 16:12:17 by lcraciun          #+#    #+#             */
/*   Updated: 2024/06/21 18:07:52 by lcraciun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*ts;

	ts = (const unsigned char *)s;
	while (n > 0)
	{
		if (*ts == (unsigned char)c)
			return ((void *)ts);
		ts++;
		n--;
	}
	return (NULL);
}
