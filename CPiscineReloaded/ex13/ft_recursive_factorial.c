/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcraciun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 15:13:12 by lcraciun          #+#    #+#             */
/*   Updated: 2024/06/06 15:16:34 by lcraciun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb >= 1)
		return (nb*ft_recursive_factorial(nb-1));
	else
		return (1);
}

void	main(void)
{
	printf("%d", ft_recursive_factorial(7));
}
