//Codigo desarrollado por Armando Yañez
#include <iostream>
#include <string>
using namespace std;

// Estructura persona
struct Persona {
    int edad;
    float sueldo;
    string Nombre, Ocupacion;
    int añosParaRetirarse;
    float ahorro;
};

// Función para calcular el ahorro
float CalcularAhorro(int edad, float sueldo) {
    return (65 - edad) * (0.1 * sueldo);
}

// Función para calcular los años faltantes para el retiro
int CalcularAnos(int edad) {
    return 65 - edad;
}

// Función para pedir datos
Persona PedirDatos() {
    Persona persona;

    cout << "Ingresa el nombre de la persona: ";
    cin >> persona.Nombre;

    cout << "Ingresa el sueldo anual de la persona: ";
    cin >> persona.sueldo;

    cout << "Ingresa la edad de la persona: ";
    cin >> persona.edad;

    cout << "Ingresa la ocupación de la persona: ";
    cin >> persona.Ocupacion;

    persona.añosParaRetirarse = CalcularAnos(persona.edad);
    persona.ahorro = CalcularAhorro(persona.edad, persona.sueldo);

    return persona;
}

// Función para imprimir datos
void ImpresionDeDatos(Persona persona) {
    cout << "Nombre: " << persona.Nombre << endl;
    cout << "Edad: " << persona.edad << endl;
    cout << "Ocupación: " << persona.Ocupacion << endl;
    cout << "Sueldo anual: " << persona.sueldo << endl;

    if (persona.edad >= 65) {
        cout << "Esta persona ya se ha retirado." << endl;
    } else {
        cout << "Años faltantes antes del retiro de " << persona.Nombre << ": " << persona.añosParaRetirarse << endl;
        cout << "Ahorro de la persona a partir de este año: " << persona.ahorro << " pesos" << endl;
    }
}

int main() {
    Persona p = PedirDatos();
    ImpresionDeDatos(p);
}
