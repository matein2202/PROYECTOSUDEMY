#include <stdio.h>
#include <stdlib.h>

struct producto {
    int codigo;
    char descripcion[50];
    float precio;
};

int main() {
    struct producto *prod;

    prod = malloc(sizeof(struct producto));

    if (prod == NULL) {
        printf("Error al asignar memoria.\n");
        return 1;
    }

    printf("Introduce el codigo: ");
    scanf("%d", &(prod->codigo));
    printf("Introduce la descripcion: ");
    scanf(" %49[^\n]", prod->descripcion); 
    printf("Introduce el precio: ");
    scanf("%f", &(prod->precio));

    printf("Codigo del articulo: %d\n", prod->codigo);
    printf("Descripcion: %s\n", prod->descripcion);
    printf("Precio: %.2f\n", prod->precio);

    free(prod);
    prod = NULL;

    return 0;
}
