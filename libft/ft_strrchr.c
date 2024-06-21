/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcraciun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 19:02:30 by lcraciun          #+#    #+#             */
/*   Updated: 2024/06/21 15:57:51 by lcraciun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	*tstr;

	tstr = (char *)str;
	while (*tstr != '\0')
		tstr++;
	while (tstr >= str)
	{
		if (*tstr == (unsigned char)c)
			return (tstr);
		tstr--;
	}
	return (NULL);
}
