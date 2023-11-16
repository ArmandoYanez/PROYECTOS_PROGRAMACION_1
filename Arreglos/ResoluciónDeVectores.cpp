//Codigo realizado por Armando YaÃ±ez
#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    float valorV[4];
    float valorV2[4];
    
    
    for (int i = 0; i <= 2; i++) { 
        for (int x = 0; x < 4; x++) { 
        if(i < 2){
            printf("Ingresa el valor %d de tu vector %d:", x+1, i+1);
            if(i == 0){
            scanf("%f", &valorV[x]);
            } else {
            scanf("%f", &valorV2[x]);
            valorV[x] = valorV[x] + valorV2[x];
             }
        }else{
            printf("Tu resultado %d es %.2f\n", x+1, valorV[x]);
        }
      }
    }
  

    return 0;
}
