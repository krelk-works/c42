/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcraciun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 20:18:42 by lcraciun          #+#    #+#             */
/*   Updated: 2024/06/08 17:10:26 by lcraciun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	lenght;

	lenght = 0;
	while (*str != '\0')
	{
		lenght++;
		str++;
	}
	return (lenght);
}
/*
void	main(void)
{
	char	*frase;

	frase = "Esto es una cadena de no se cuantos caracteres";
	printf("%d", ft_strlen(frase));
}
*/
