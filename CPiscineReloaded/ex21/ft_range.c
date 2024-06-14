/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcraciun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 18:44:11 by lcraciun          #+#    #+#             */
/*   Updated: 2024/06/12 20:07:44 by lcraciun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	new_array_lenght;
	int	*new_array;
	int	i;

	new_array_lenght = max - min;
	new_array = malloc(new_array_lenght * sizeof(int));
	if (min >= max)
		return (NULL);
	if (!new_array)
		return (NULL);
	i = 0;
	while (min < max)
	{
		new_array[i] = min;
		min++;
		i++;
	}
	return (new_array);
}
