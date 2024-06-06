/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcraciun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 14:49:07 by lcraciun          #+#    #+#             */
/*   Updated: 2024/06/06 15:06:14 by lcraciun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	factorial;
	int	current_position;

	factorial = 1;
	current_position = 1;
	while (current_position <= nb)
	{
		factorial = current_position * factorial;
		current_position++;
	}
	if (nb == 0)
		return (0);
	else
		return (factorial);
}
/*
void	main(void)
{
	int	fact;

	fact = 0;
	fact = ft_iterative_factorial(7);
	printf("%d", fact);
}
*/
