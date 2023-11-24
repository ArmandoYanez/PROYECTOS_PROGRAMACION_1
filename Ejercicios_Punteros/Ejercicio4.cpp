#include <iostream>

int main(){
    const char* message = "Hello world";
    std::cout<< message << std::endl;
    std::cout<< &message << std::endl;

    for (int i=0; i < 11;++i) {
        std::cout<<*message<<std::endl;
        message++;
    }

    return 0;
}