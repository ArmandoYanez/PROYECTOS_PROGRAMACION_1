#ifndef CALCULADORA_H
#define CALCULADORA_H

#include <iostream>
#include <vector>


template <typename T>
T RecopilarDatos(int NumDato){
    T dato;
    std::cout << "Ingresa tu valor numero " << NumDato <<std::endl;
    std::cin >> dato;
    return dato;
}

template <typename T>
std::vector<T> PedirCantidadDeDatos(){
    int tamano;
    std::cout << "Cuantos datos se utilizaran en tu operacion?: " << std::endl;
    std::cin >> tamano;

    std::vector<T> v;

    for(int i = 0;i < tamano; i++){
        v.push_back(RecopilarDatos<T>(i + 1));
    }
    return v;
}

template <typename T>
std::vector<T> PedirCantidadDeDatosPP(){
    int tamano = 2;
    std::vector<T> v;

    for(int i = 0;i < tamano; i++){
        v.push_back(RecopilarDatos<T>(i + 1));
    }
    return v;
}

template <typename T>
std::vector<T> PedirCantidadDeDatosR(){
    int tamano = 1;
    std::vector<T> v;

    for(int i = 0;i < tamano; i++){
        v.push_back(RecopilarDatos<T>(i + 1));
    }
    return v;
}

template <typename T>
T EleccionOpcion(){
    T eleccion;
    std::cout << "Que operacion deseas hacer?: " << std::endl;
    std::cout << "1- Suma. " << std::endl;
    std::cout << "2- Resta. " << std::endl;
    std::cout << "3- Multiplicacion. " << std::endl;
    std::cout << "4- Division. " << std::endl;
    std::cout << "5- Porcentaje. " << std::endl;
    std::cout << "6- Raiz. " << std::endl;
    std::cout << "7- Potencia. " << std::endl;
    std::cin >> eleccion;

    return eleccion;
}

template <typename T>
T Suma(){
    std::vector<T> V;
    V = PedirCantidadDeDatos<T>();
    T resultado;

    std::cout << "Elementos del vector:" << std::endl;
    for (const T& elemento : V) {
        resultado += elemento;
    }
    std::cout << std::endl;
    std::cout << "El resultado de tu suma es: "<< resultado << std::endl;
    return resultado;
}

template <typename T>
T Resta(){
    std::vector<T> V;
    V = PedirCantidadDeDatos<T>();
    T resultado = V[0];

    std::cout << "Elementos del vector:" << std::endl;
    for (size_t i = 1; i < V.size(); ++i) {
        resultado -= V[i];
    }

    std::cout << "El resultado de tu resta es: "<< resultado << std::endl;
    return resultado;
}

template <typename T>
T Multiplicacion(){
    std::vector<T> V;
    V = PedirCantidadDeDatos<T>();
    T resultado = 1;

    std::cout << "Elementos del vector:" << std::endl;
    for (const T& elemento : V) {
        resultado *= elemento;
    }
    std::cout << std::endl;
    std::cout << "El resultado de tu multiplicacion es: "<< resultado << std::endl;
    return resultado;
}

template <typename T>
T Division(){
    std::vector<T> V;
    V = PedirCantidadDeDatos<T>();
    T resultado = V[0];

    std::cout << "Elementos del vector:" << std::endl;
    for (size_t i = 1; i < V.size(); ++i) {
        if (V[i] != 0) {
            resultado /= V[i];
        } else {
            std::cout << "Error: División por cero encontrada." << std::endl;
            return 0;
        }
    }

    std::cout << "El resultado de tu división es: " << resultado << std::endl;
    return resultado;
}

template <typename T>
T Porcentaje(){
    std::vector<T> V;
    V = PedirCantidadDeDatosPP<T>();
    T valor = V[0];
    T porcentaje = V[1];

    T resultado = (valor * porcentaje) / static_cast<T>(100);

    std::cout << "El " << porcentaje << "% de " << valor << " es: "<< resultado << std::endl;
    return resultado;
}

template <typename T>
T Raiz(){
    std::vector<T> V;
    V = PedirCantidadDeDatosR<T>();
    T numero = V[0];
    T estimacion = numero / static_cast<T>(2);

    for (int i = 0; i < 10; ++i) {
        estimacion = static_cast<T>(0.5) * (estimacion + (numero / estimacion));
    }

    std::cout << "La raíz cuadrada de " << numero << " es: "<< estimacion << std::endl;
    return estimacion;
}

template <typename T>
T Potencia(){
    std::vector<T> V;
    V = PedirCantidadDeDatosPP<T>();
    T base = V[0];
    T exponente = V[1];
    T resultado = static_cast<T>(1);

    for (T i = static_cast<T>(0); i < exponente; ++i) {
        resultado *= base;
    }

    std::cout << base << " elevado a " << exponente << " es: "<< resultado << std::endl;
    return resultado;
}


template <typename T>
T ProcesoOperacion(T Opcion){
    T resultado;
    switch(Opcion){

        case 1:
            resultado = Suma<T>();
            break;

        case 2:
            resultado = Resta<T>();
            break;

        case 3:
            resultado = Multiplicacion<T>();
            break;

        case 4:
            resultado = Division<T>();
            break;

        case 5:
            resultado = Porcentaje<T>();
            break;

        case 6:
            resultado = Raiz<T>();
            break;

        case 7:
            resultado = Potencia<T>();
            break;

        default:
            std::cout<<"Opcion no valida"<<std::endl;
            break;
    }

    return resultado;

}

template <typename T>
T ProcesoCompleto(){
    T RF;
    RF = ProcesoOperacion<int>(EleccionOpcion<int>());
    return RF;
}

#endif
