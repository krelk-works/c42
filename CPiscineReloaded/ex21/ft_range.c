/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcraciun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 18:44:11 by lcraciun          #+#    #+#             */
/*   Updated: 2024/06/11 19:27:48 by lcraciun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	array_lenght;
	int	*new_array;
	int	i;

	if (min >= max)
		return (NULL);
	array_lenght = max - min;
	new_array = malloc(array_lenght * sizeof(int));
	i = 0;
	while (i < array_lenght)
	{
		new_array[i] = min + 1;
		i++;
	}
	return (new_array);
}
