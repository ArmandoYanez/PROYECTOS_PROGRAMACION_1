//#ifndef CALCULADORA_H
//#define CALCULADORA_H

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
	PedirCantidadDeDatos<int>();
}

template <typename T>
T Resta(){
	PedirCantidadDeDatos<int>();
}

template <typename T>
T Multiplicacion(){
	PedirCantidadDeDatos<int>();
}

template <typename T>
T Division(){
	PedirCantidadDeDatos<int>();
}


template <typename T>
T ProcesoOperacion(T Opcion){
	
	switch(Opcion){
		
		case 1: 
		Suma<float>();
		break;
		
		case 2:
		Resta<float>();	
		break;
			
		case 3:
		Multiplicacion<float>();
		break;
		
		case 4:
		Division<float>();
		break;
		
		case 5:
			
		break;
		
		case 6:
			
		break;
		
		case 7:
			
		break;
		
		default: 
		
		break;
	}
	
	
	
	
}

template <typename T>
T ProcesoCompleto(){
	ProcesoOperacion<int>(EleccionOpcion<int>());
}


int main(){
    ProcesoCompleto<int>();
    return 0;
}


//#endif
