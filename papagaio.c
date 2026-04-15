
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if (argc == 1)
    {
        printf("voce nao digitou nada\n");
        exit(0);
    }

    printf("voce digitou %s\n", argv[1]);
    printf("Feito por Lara Fazani");

    return 0;
}