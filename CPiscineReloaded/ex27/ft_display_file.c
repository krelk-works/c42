/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcraciun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 14:35:10 by lcraciun          #+#    #+#             */
/*   Updated: 2024/06/15 14:56:34 by lcraciun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

#define BUFFER_SIZE 4096

void	display_error(char *message)
{
	while (*message)
		write(2, message++, 1);
	write(2, "\n", 1);
}

void	display_file(char *filename)
{
	int		fd;
	int		bytes_read;
	char	buffer[BUFFER_SIZE];

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		display_error("Cannot read file.");
		return ;
	}
	bytes_read = read(fd, buffer, BUFFER_SIZE);
	while (bytes_read > 0)
	{
		write(1, buffer, bytes_read);
		bytes_read = read(fd, buffer, BUFFER_SIZE);
	}
	close(fd);
}

int	main(int argc, char **argv)
{
	if (argc < 2)
		display_error("File name missing.");
	else if (argc > 2)
		display_error("Too many arguments.");
	else
		display_file(argv[1]);
	return (0);
}
