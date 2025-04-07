#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Headers
int toInt(char* text);
double toDouble(char* text);

int main() {
    char PizzaVeg[10];
    char ingrediente[50];

    printf("¿Quiere una Pizza vegetariana? (si/no)\n");
    scanf("%s", PizzaVeg);

    if (strcmp(PizzaVeg, "si") == 0) {
        printf("Ok, estos son nuestros ingredientes vegetarianos, elija uno\n");
        printf("Pimiento\n");
        printf("Tofu\n");
        scanf("%s", ingrediente);
        printf("Ok, será una pizza vegetariana con mozzarella, tomate y %s\n", ingrediente);
    } else {
        printf("Ok,  estos son nuestros ingredientes no vegetarianos, elija uno\n");
        printf("Peperoni\n");
        printf("Jamon\n");
        printf("Salmon\n");
        scanf("%s", ingrediente);
        printf("ok, será una pizza no vegetariana con mozzarella, tomate y %s\n", ingrediente);
    }

    return 0;
}

