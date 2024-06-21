/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcraciun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 16:20:01 by lcraciun          #+#    #+#             */
/*   Updated: 2024/06/21 18:17:56 by lcraciun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	londst;
	size_t	lonsrc;
	size_t	cont;

	londst = ft_strlen(dst);
	lonsrc = ft_strlen(src);
	if (dstsize <= londst)
		return (lonsrc + dstsize);
	cont = londst;
	while (*src != '\0' && cont < (dstsize - 1))
		*(dst + cont++) = *src++;
	*(dst + cont) = '\0';
	return (londst + lonsrc);
}
