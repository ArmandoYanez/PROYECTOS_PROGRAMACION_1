#include <iostream>
#include <string>
#include <ctime>
#include <chrono>

void PedirDatos (std::string* Nombre, std::string* CURP, float* Deducible, int* ano, int* mes, int* dia){

    //Ingresar Nombre
    std::cout << "Cual es tu nombre?:" << std::endl;
    std::cin >> *Nombre;

    //Ingresar curp
    std::cout << "Cual es tu CURP?:" << std::endl;
    std::cin >> *CURP;

    //Ingresar deducible
    std::cout << "Cual es tu deducible?:" << std::endl;
    std::cin >> *Deducible;

    //Ingresar año
    std::cout << "Ingresa año de nacimiento a 4 digitos, ejemplo (2004): " << std::endl;
    std::cin >> *ano;

    //Ingresar mes
    std::cout << "Ingresa el mes de nacimiento a 2 digitos, ejemplo (02): " << std::endl;
    std::cin >> *mes;

    //Ingresar dia
    std::cout << "Ingresa el dia de nacimiento a 2 digitos, ejemplo (09): " << std::endl;
    std::cin >> *dia;

}
//Funcion para calcular dia
int calcularDia(){
    //Calcular dia actual de la maquina
    auto tiempoActual = std::chrono::system_clock::now();

    // Convertir el tiempo actual a un tipo de tiempo establecido
    std::time_t tiempo = std::chrono::system_clock::to_time_t(tiempoActual);

    // Convertir el tiempo a una estructura tm para obtener los componentes individuales
    std::tm* tiempoDescompuesto = std::localtime(&tiempo);

    // Obtener el día, mes y año
    int diaActual = tiempoDescompuesto->tm_mday;
    int mesActual = tiempoDescompuesto->tm_mon + 1; // Sumar 1 porque en tm_mon enero es 0
    int anioActual = tiempoDescompuesto->tm_year + 1900; // Se agrega 1900 porque tm_year cuenta desde 1900{

    return diaActual;
}

//Funcion para calcular Mes
int calcularMes(){
    //Calcular dia actual de la maquina
    auto tiempoActual = std::chrono::system_clock::now();

    // Convertir el tiempo actual a un tipo de tiempo establecido
    std::time_t tiempo = std::chrono::system_clock::to_time_t(tiempoActual);

    // Convertir el tiempo a una estructura tm para obtener los componentes individuales
    std::tm* tiempoDescompuesto = std::localtime(&tiempo);

    // Obtener el día, mes y año
    int mesActual = tiempoDescompuesto->tm_mon + 1; // Sumar 1 porque en tm_mon enero es 0

    return mesActual;
}

//Funcion para calcular Año
int calcularAnio(){
    //Calcular dia actual de la maquina
    auto tiempoActual = std::chrono::system_clock::now();

    // Convertir el tiempo actual a un tipo de tiempo establecido
    std::time_t tiempo = std::chrono::system_clock::to_time_t(tiempoActual);

    // Convertir el tiempo a una estructura tm para obtener los componentes individuales
    std::tm* tiempoDescompuesto = std::localtime(&tiempo);

    // Obtener el día, mes y año
    int anioActual = tiempoDescompuesto->tm_year + 1900; // Se agrega 1900 porque tm_year cuenta desde 1900{

    return anioActual;
}

//Crearcion de poliza
void CrearcionDePoliza( std::string Nombre, std::string CURP, float Deducible, float MontoMax, int mes, int dia, int ano, int edad){
    
     PedirDatos(&Nombre,&CURP,&Deducible,&mes,&dia,&ano);
}

int main(){
    //Datos principales del objeto
    std::string Nombre, CURP;
    float Deducible, MontoMax;

    //Fecha de nacimiento
    int mes, dia, ano;
    int edad;
    
    
    
    CrearcionDePoliza(Nombre,CURP,Deducible,MontoMax,mes,dia,ano,edad);

    return 0;
}