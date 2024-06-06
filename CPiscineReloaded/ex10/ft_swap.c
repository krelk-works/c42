/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcraciun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 11:50:36 by lcraciun          #+#    #+#             */
/*   Updated: 2024/06/06 11:51:04 by lcraciun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temporal;

	temporal = *a;
	*a = *b;
	*b = temporal;
}
/*
void	main(void)
{
	int num_1;
	int num_2;

	num_1 = 1;
	num_2 = 2;

	printf("%d - %d", num_1, num_2);
	ft_swap(&num_1, &num_2);
	printf("%d - %d", num_1, num_2);
}
*/
