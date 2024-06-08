/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcraciun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 20:19:43 by lcraciun          #+#    #+#             */
/*   Updated: 2024/06/07 20:19:57 by lcraciun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return ((unsigned char)*s1 - (unsigned char)*s2);
}
/*
void	main(void)
{
	char	*text1;
	char	*text2;

	text1 = "Hola mundo!";
	text2 = "Hola mundo!";
	printf("%d", ft_strcmp(text1, text2));
}
*/
