/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcraciun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 19:09:31 by lcraciun          #+#    #+#             */
/*   Updated: 2024/06/11 19:15:25 by lcraciun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#define ABS(x) (((x) + ((x) >> (sizeof(x) * 8 - 1))) \
		^ ((x) >> (sizeof(x) * 8 - 1)))
/*
int	main(void)
{
	int	a;
	int	b;
	int	c;

	a = -5;
	b = 7;
	c = 0;
	printf("ABS(%d) = %d\n", a, ABS(a));
	printf("ABS(%d) = %d\n", b, ABS(b));
	printf("ABS(%d) = %d\n", c, ABS(c));
	return (0);
}
*/
