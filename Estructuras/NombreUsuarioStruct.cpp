#include <iostream>
#include <string>

struct Persona {
    std::string nombre, contrasena;
};

int main() {
    Persona armando;
    armando.nombre = "Armando";
    armando.contrasena = "123456";

    std::string usuarioIngresado;
    std::string contrasenaIngresada;

    std::cout << "Ingrese su nombre de usuario: ";
    std::cin >> usuarioIngresado;

    std::cout << "Ingrese su contrasena: ";
    std::cin >> contrasenaIngresada;

    if (usuarioIngresado == armando.nombre && contrasenaIngresada == armando.contrasena) {
        std::cout << "Inicio de sesión exitoso" << std::endl;
    } else {
        std::cout << "Datos ingresados incorrectamente" << std::endl;
    }

    return 0;
}
