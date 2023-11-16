#include <stdio.h>

int main() {
    // Declaración de variables
    float NumUno, NumDos;

    // Solicitud de valores
    printf("Ingresa el primer número: ");
    scanf("%f", &NumUno);

    printf("Ingresa el segundo número: ");
    scanf("%f", &NumDos);

    // Cálculos e impresión de resultados
    printf("El resultado de la suma es: %.2f\n", NumUno + NumDos);
    printf("El resultado de la resta es: %.2f\n", NumUno - NumDos);
    printf("El resultado de la multiplicación es: %.2f\n", NumUno * NumDos);

    // Comprobación de la división por cero
    if (NumDos != 0) {
        printf("El resultado de la división es: %.2f\n", NumUno / NumDos);
    } else {
        printf("No es posible dividir entre cero.\n");
    }

    return 0;
}
