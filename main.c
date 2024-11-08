#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>

int main(void) {
    int fd;
    char *line;

    // Abrir el archivo para lectura
    fd = open("txt.txt", O_RDONLY);
    if (fd < 0) {
        perror("Error al abrir el archivo");
        return 1;
    }

    // Leer e imprimir cada línea hasta llegar al final del archivo
    while ((line = get_next_line(fd)) != NULL) {
        write(1, line, ft_strlen(line)); // Escribir la línea en la salida estándar (pantalla)
        free(line); // Liberar la memoria de la línea después de imprimirla
    }

    // Cerrar el archivo
    close(fd);
    return 0;
}