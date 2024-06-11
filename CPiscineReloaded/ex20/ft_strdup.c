/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcraciun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 19:38:35 by lcraciun          #+#    #+#             */
/*   Updated: 2024/06/11 19:57:40 by lcraciun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	lenght;

	lenght = 0;
	while (*str != '\0')
	{
		lenght++;
		str++;
	}
	return (lenght);
}

char	*ft_strdup(char *src)
{
	char	*new_str;
	char	*begin;

	new_str = malloc((ft_strlen(src) + 1) * sizeof(char));
	begin = new_str;
	while (*src != '\0')
	{
		*new_str = *src;
		src++;
		new_str++;
	}
	*new_str = '\0';
	return (begin);
}
/*
int	main(void)
{
	char	*temp;
	char	*dup;

	temp = "jlhaa;ga;kijg;IRGJIRILWrgWGRLWrig;LIWRG;LWNrg?";
	dup = ft_strdup(temp);
	//ft_putstr(dup);
	printf("%s", dup);
}
*/
