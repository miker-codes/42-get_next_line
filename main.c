#include <fcntl.h>   // open, O_RDONLY
#include <unistd.h>  // read, close, write
#include <stdio.h>   // printf (solo para pruebas)

int main(void)
{
    int     fd;       // el descriptor de archivo: un simple int
    char    buf[8];   // 5 bytes de datos + 1 para el '\0'
    ssize_t leidos;   // read devuelve cuántos bytes leyó realmente
    int     index = 0;

    // open devuelve un int >= 0 si va bien, -1 si falla
    fd = open("test.txt", O_RDONLY);
    if (fd < 0)
    {
        printf("Error abriendo el archivo\n");
        return (1);
    }
    leidos = read(fd, buf, 7);
    while (leidos > 0)
    {
        buf[leidos] = '\0';
        printf("%d lectura: %s\n", ++index, buf);
        leidos = read(fd, buf, 7);
    }

    close(fd);
    return (0);
}