#include <iostream>

void ModificarValor(int * PTR){
    *PTR = 7;
}

int main(){
    int variable = 9;
    ModificarValor(&variable);

    std::cout<< variable << std::endl;
    return 0;
}