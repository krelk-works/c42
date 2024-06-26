/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcraciun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 20:13:11 by lcraciun          #+#    #+#             */
/*   Updated: 2024/06/07 20:15:04 by lcraciun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	current_position;
	int	flag;

	current_position = 1;
	flag = 0;
	while ((current_position < (nb / 2)) && (flag != 1))
	{
		if ((current_position * current_position) == nb)
		{
			flag = 1;
		}
		else
		{
			current_position++;
		}
	}
	if (flag == 1)
		return (current_position);
	else
		return (0);
}
/*
void	main(void)
{
	printf("%d", ft_sqrt(9));
}
*/
