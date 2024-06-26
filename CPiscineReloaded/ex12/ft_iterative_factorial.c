/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcraciun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 14:49:07 by lcraciun          #+#    #+#             */
/*   Updated: 2024/06/12 19:55:00 by lcraciun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
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
	if (nb < 0)
		return (0);
	else if (nb > 0 && nb < 2)
		return (1);
	else
		return (factorial);
}
/*
int	main(void)
{
	int	fact;

	fact = 0;
	fact = ft_iterative_factorial(19);
	printf("%d", fact);
	return (0);
}
*/
