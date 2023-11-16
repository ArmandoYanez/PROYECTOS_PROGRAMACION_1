//Codigo realizado por Armando YaÃ±ez
#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    float Calificacion[5];
    float promedio = 0; // Initialize promedio to 0
    
    for (int i = 0; i < 5; i++) { // Corrected the loop condition
        printf("Ingresa la calificacion numero %d: ", i+1);
        scanf("%f", &Calificacion[i]);
        promedio += Calificacion[i];
    }
    
    promedio = promedio / 5;
    printf("Tu promedio es de %.2f\n",promedio);
    
    if (promedio >= 9) { // Changed the condition here
        printf("Alumno de excelencia\n");
    } else if (promedio >= 6) {
        printf("Alumno Aprobado\n");
    } else {
        printf("Alumno Reprobado\n");
    }

    return 0;
}
