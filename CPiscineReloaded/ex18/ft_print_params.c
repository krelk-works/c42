/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcraciun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 20:22:16 by lcraciun          #+#    #+#             */
/*   Updated: 2024/06/08 17:11:19 by lcraciun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int	main(int argc, char *argv[])
{
	int	pos_param;

	pos_param = 1;
	if (argc > 1)
	{
		while (argc > pos_param)
		{
			while (*argv[pos_param] != '\0')
			{
				ft_putchar(*argv[pos_param]);
				argv[pos_param]++;
			}
			ft_putchar('\n');
			pos_param++;
		}
	}
	return (0);
}
