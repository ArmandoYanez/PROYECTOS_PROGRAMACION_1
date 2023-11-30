#include <iostream>

int main(){

    int Arreglo[] = {1, 2, 3, 4, 5};

    int* PTR = Arreglo;

    for (int i = 0; i < 5; ++i) {
        std::cout<< * PTR << std::endl;
        * PTR++;
    }
    return 0;
}
