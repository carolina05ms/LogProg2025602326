#include <stdio.h>
#include <math.h>

int main() 
{
    double l, pt, at, pi;

    // Asignacion de valores 
    l = 7; 
    pi = 3.1416; 

   
    at = ((pi * pow((3 * l) / 2, 2)) / 2) + (2 * (l * (3 * l))) + (l * (3 * l));

    
    pt= l*(7+2*sqrt(10)+1.5*pi);

    // Imprimir el resultado con mayor precisión
    printf("El area total es: %f\n", at);
    printf("El perimetro total es: %f\n", pt);

    return 0;
}