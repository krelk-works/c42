/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcraciun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 19:02:30 by lcraciun          #+#    #+#             */
/*   Updated: 2024/06/21 15:45:19 by lcraciun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	char	*tstr;

	tstr = (char *)str;
	while (*tstr != '\0')
	{
		if (*tstr == (unsigned char)c)
			return (tstr);
		tstr++;
	}
	if (*tstr == (unsigned char)c)
		return (tstr);
	return (NULL);
}
