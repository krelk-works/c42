/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcraciun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 17:33:15 by lcraciun          #+#    #+#             */
/*   Updated: 2024/06/08 19:29:51 by lcraciun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	char	actual_char;

	while (*str != '\0')
	{
		actual_char = *str;
		ft_putchar((actual_char));
		str++;
	}
}

int	ft_strcmp(char *c1, char *c2)
{
	while (*c1 && (*c1 == *c2))
	{
		c1++;
		c2++;
	}
	return ((unsigned char)*c1 - (unsigned char)*c2);
}

void	ft_sort_params(int argc, char *argv[])
{
	int		i;
	int		j;
	char	*temp;

	i = 1;
	j = 1;
	while (argc > i)
	{
		j = i + 1;
		while (argc > j)
		{
			if (ft_strcmp(argv[i], argv[j]) > 0)
			{
				temp = argv[i];
				argv[i] = argv[j];
				argv[j] = temp;
			}
			j++;
		}
		i++;
	}
}

int	main(int argc, char *argv[])
{
	int	pos_param;

	pos_param = 1;
	if (argc > 1)
	{
		ft_sort_params(argc, argv);
		while (argc > pos_param)
		{
			ft_putstr(argv[pos_param]);
			ft_putchar('\n');
			pos_param++;
		}
	}
	return (0);
}
