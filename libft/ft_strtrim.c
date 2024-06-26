/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcraciun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 18:54:20 by lcraciun          #+#    #+#             */
/*   Updated: 2024/06/26 21:17:27 by lcraciun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	first;
	size_t	last;

	if (!s1 || !set)
		return (NULL);
	first = 0;
	last = ft_strlen(s1);
	while (ft_strchr(set, s1[first]))
		first++;
	if (first == last)
		return (ft_strdup(""));
	while (ft_strrchr(set, s1[last - 1]))
		last--;
	return (ft_substr(s1, first, (last - first)));
}
/*
int	main(void)
{
	char	*text;

	text = "************Testeo**********";
	printf("%s", ft_strtrim(text, "*"));
	return (0);
}
*/
