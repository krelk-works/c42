/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcraciun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 19:18:03 by lcraciun          #+#    #+#             */
/*   Updated: 2024/06/24 19:41:51 by lcraciun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		max_lenght;
	char	*result;
	char	*begin;

	max_lenght = ft_strlen(s1) + ft_strlen(s2);
	result = (char *)malloc(sizeof(char) * max_lenght + 1);
	if (!result)
		return (NULL);
	begin = result;
	while (*s1)
		*result++ = *s1++;
	while (*s2)
		*result++ = *s2++;
	*result = '\0';
	return (begin);
}
