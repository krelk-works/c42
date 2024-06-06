#include <stdio.h>
#include <string.h>

int ft_strcmp(char *s1, char *s2) {
    // Comparar los caracteres uno por uno
    while (*s1 && (*s1 == *s2)) {
        s1++;
        s2++;
    }
    // Devolver la diferencia entre los caracteres que no coinciden
    return *(unsigned char *)s1 - *(unsigned char *)s2;
}

int main(void) {
    char *text1 = "Hola mundo!";
    char *text2 = "¿Cómo estais todos?";

    // Llamar a la función ft_strcmp y mostrar el resultado
    int result = ft_strcmp(text1, text2);
    printf("%d\n", result);
printf("%d\n", strcmp(text1, text2));
    return 0;
}

