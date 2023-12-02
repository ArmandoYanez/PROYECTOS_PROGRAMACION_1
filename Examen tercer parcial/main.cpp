//
// Created by Armando Yañez.
//
#include "CreadorDePolizas.h"

int main(){
    // Crear un vector de cadenas para guardar las polizas
    std::vector<std::string> VectorDePolizas;
    //Crear variable para el folio de las cadenas
    int folio = 0;

    //El vector con las polizas se guardara
    VectorDePolizas = GeneradorPolizas(folio, VectorDePolizas);

    return 0;
}