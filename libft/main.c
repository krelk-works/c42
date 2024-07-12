/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcraciun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 16:32:55 by lcraciun          #+#    #+#             */
/*   Updated: 2024/07/09 19:42:46 by lcraciun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

#define RESET "\033[0m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define BLUE "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN "\033[36m"
#define BOLD "\033[1m"
#define UNDERLINE "\033[4m"

int	main(void)
{
	char	c;
	char	*text;

	text = "Hola mundo!";
	//printf("Inserta una letra :");
	//scanf("%c", &c);
	c = 'A';
	printf(GREEN "===== == TEST ft_isalpha == =====\n" RESET);
	if (ft_isalpha(c))
		printf(GREEN "Es una letra del alfabeto\n" RESET);
	else
		printf(RED "No es una letra del alfabeto\n" RESET);
	printf(GREEN "===== == TEST ft_isdigit == =====\n" RESET);
	if (ft_isdigit(c))
		printf(GREEN "Es un numero\n" RESET);
	else
		printf(RED "No es un numero\n" RESET);
	printf(GREEN "===== == TEST ft_isalnum == =====\n" RESET);
	if (ft_isalnum(c))
		printf(GREEN "Es un simbolo alfanumerico\n" RESET);
	printf(GREEN "===== == TEST ft_isascii == =====\n" RESET);
	if (ft_isascii(c))
		printf(GREEN "Es un simbolo de la tabla ASCI\n" RESET);
	printf(GREEN "===== == TEST ft_isprint == =====\n" RESET);
	if (ft_isprint(c))
		printf(GREEN "Es un caracter printable\n" RESET);

	printf(GREEN "===== == TEST ft_strlen == =====\n" RESET);
	printf(CYAN "La longitud de la variable char *text (%s) es de %zu caracteres.\n" RESET, text, ft_strlen(text));

	printf(GREEN "===== == TEST ft_memset == =====\n" RESET);
	//Test MEMSET
	char	buffer[10];
    	// Llenar el buffer con el valor 'A'
	ft_memset(buffer, 'A', sizeof(buffer));
    
	// Imprimir el contenido del buffer
	for (int i = 0; i < sizeof(buffer); i++) {
        	printf("%c ", buffer[i]);
	}
    	printf("\n");
	//Fin test MEMSET

	printf(GREEN "===== == TEST ft_memmove == =====\n" RESET);
	// Test MEMMOVE
	char str[19] = "123456789012345678";

	// Copiamos el contenido superpuesto en la misma cadena
	ft_memmove(str + 5, str, 10);

	// Imprimimos el contenido de la cadena
	printf("Contenido de str: %s\n", str);

	// Fin test MEMMOVE
	
	printf(GREEN "===== == TEST ft_substr == =====\n" RESET);

	char	*substrtxt = "Un texto de ejemplo";
	printf("*substrtxt = %s\n", substrtxt);
	printf("ft_substr(substrtxt, 0, 8) -> " YELLOW "%s\n" RESET, ft_substr(substrtxt, 0, 8));

	printf(GREEN "===== == TEST ft_strjoin == =====\n" RESET);
	// TEST - ft_strjoin
	
	char	*txt001 = "Hola";
	char	*txt002 = " mundo";

	printf("%s\n", txt001);
	printf("%s\n", txt002);
	printf(CYAN "Resultado: %s\n" RESET, ft_strjoin(txt001, txt002));

	// FIN TEST ft_strtrim
	
	
	printf(GREEN "===== == TEST ft_strtrim == =====\n" RESET);
	char    *ft_strtrim_text;
        ft_strtrim_text = "***************Testeo*************";
	printf("ft_strtrim_text = **********Testeo**********\n");
        ft_strtrim(ft_strtrim_text, "*");
	printf("Resultado -> " GREEN "%s\n" RESET, ft_strtrim(ft_strtrim_text, "*"));


	// TEST - ft_split
	printf(GREEN "===== == TEST ft_split == =====\n" RESET);
	char    **arraydechars;
        char    *textocondelimitador;
	int	csplit;

	csplit = 0;
        textocondelimitador = "hola,adios,tierra,mar,y,aire";
        arraydechars = ft_split(textocondelimitador, ',');
	while (arraydechars[csplit])
	{
		printf("[] %s \n", arraydechars[csplit]);
		csplit++;
	}
	// FIN TEST ft_split
}
