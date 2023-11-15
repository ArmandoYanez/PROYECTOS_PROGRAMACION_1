#ifndef PENSION_R
#define PENSION_R

#include <iostream>
#include <string>
using namespace std;

//Estructura persona
struct Persona{
    int edad;
    float sueldo;
    string Nombre, Ocupacion;
    int añosParaRetirarase;
    float ahorro;
};

//Funcion calculo de ahorros
float CalcularAhorro(int edad, float sueldo) {
    float ahorro = (65 - edad) * (0.1 * sueldo);
    return ahorro;
}

//Funcion calculo de años faltantes
float CalcularAnos(int edad) {
    int edadF = (65 - edad);
    return edadF;
}

//Funcion para la impreción de datos
void ImpresionDeDatos(Persona persona){
    persona.ahorro = CalcularAhorro(persona.edad, persona.sueldo);
    persona.añosParaRetirarase = CalcularAnos(persona.edad);
    
    cout << "Años faltantes antes del retiro de "<< persona.Nombre << ": " << persona.añosParaRetirarase << std::endl;
    cout << "Ahorro de la persona apartir de este año: "<< persona.ahorro  << std::endl;
}



//Funcion para pedir datos
struct Persona PedidadDeDatos(){
    int edad, añosParaRetirarase;
    float sueldo;
    string Nombre, Ocupacion;
    
    struct Persona persona;
    cout << "Ingresa el nombre de la persona: "  << std::endl;
    cin >> Nombre;
    persona.Nombre = Nombre;
    
    cout << "Ingresa el sueldo anual de la persona: "  << std::endl;
    cin >> sueldo;
    persona.sueldo = sueldo;
    
    cout << "Ingresa la edad de la persona: "  << std::endl;
    cin >> edad;
    persona.edad = edad;
    
    cout << "Ingresa la ocupacion de la persona: "  << std::endl;
    cin >> Ocupacion;
    persona.Ocupacion = Ocupacion;
    
    ImpresionDeDatos(persona);
    
  
    return persona;
}
#endif
