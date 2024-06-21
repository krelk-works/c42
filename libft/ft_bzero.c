/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcraciun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 17:50:19 by lcraciun          #+#    #+#             */
/*   Updated: 2024/06/18 17:53:23 by lcraciun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_bzero(void *s, size_t n)
{
	unsigned char	*p;

	p = (unsigned char *)s;
	while (n)
	{
		*p = '\0';
		p++;
		n--;
	}
	return (s);
}