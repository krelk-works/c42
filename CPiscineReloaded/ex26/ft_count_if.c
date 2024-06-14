/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcraciun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 18:28:08 by lcraciun          #+#    #+#             */
/*   Updated: 2024/06/14 21:16:46 by lcraciun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <unistd.h>
/*
int	ft_test_if(char	*c)
{
	if (c)
		return (1);
}
*/
int	ft_count_if(char **tab, int (*f)(char *))
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (tab[i] != NULL)
	{
		if ((*f)(tab[i]) == 1)
			count++;
		i++;
	}
	return (count);
}
/*
int	main(void)
{
	char	*text;
	int		resp;

	text = "khhglkhalkghglkahgluahguhs sg sh gh hg";
	resp = ft_count_if(&text, ft_test_if);
	printf("%d", resp);
}
*/
