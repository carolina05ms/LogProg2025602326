#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Calcular el IMC
int toInt(char* text);
	double toDouble(char* text);

int main() {
    int peso;
    double estatura;

    printf("¿Cual es su peso?\n");
    scanf("%d", &peso);
    printf("¿Cual es su estatura?\n");
    scanf("%lf", &estatura);
    
    double IMC;
    IMC = peso / (estatura * estatura);
    
    printf("Su IMC es de %.2f\n", IMC);
    if (IMC <= 18.4) {
        printf("Bajo Peso\n");
    } else if (IMC >= 18.5 && IMC <= 24.9) {
        printf("Normal\n");
    } else if (IMC >= 25.0 && IMC <= 29.9) {
        printf("Sobrepeso\n");
    } else if (IMC >= 30.0 && IMC <= 34.9) {
        printf("Obesidad clase 1\n");
    } else if (IMC >= 35.0 && IMC <= 39.9) {
        printf("Obesidad clase 2\n");
    } else if (IMC >= 40.0) {
        printf("Obesidad clase 3\n");
    } else {
        printf("ERROR\n");
    }
    return 0;
}

