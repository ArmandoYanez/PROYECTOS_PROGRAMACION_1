#include <iostream>

int main(){
    int EnteroNormal = 7;
    int * EnteroPuntero = &EnteroNormal; //Creacion de puntero

    *EnteroPuntero = 8;

    std::cout<<EnteroNormal<<std::endl;

    return 0;
}