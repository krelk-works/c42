/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcraciun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 17:50:50 by lcraciun          #+#    #+#             */
/*   Updated: 2024/06/14 18:07:10 by lcraciun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <unistd.h>
#include <stdio.h>

void	ft_putnbr(int nb) {
	printf("%d", nb);
}
*/
void	ft_foreach(int *tab, int lenght, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < lenght)
	{
		(*f)(tab[i]);
		i++;
	}
}
/*
int	main(void)
{
	int	*arr;

	arr[0] = 1;
	arr[1] = 2;
	arr[2] = 3;
	arr[3] = 4;
	ft_foreach(arr, 4, &ft_putnbr);
}
*/
