//Codigo propiedad de Armando YaÃ±ez
#include <iostream>
#include <string>

int main()
{
    std::string contrasena, contrasenaU, usuario, usuarioU;
    bool Aux = true, Aux2 = true;
    int NumCar = 0;
    

    std::cout << "Crea tu nombre de usuario:" << std::endl;
    std::cin >> usuario;
    std::cout << "Crea tu contraseÃ±a:" << std::endl;
    std::cin >> contrasena;
    NumCar = contrasena.size();
    
    std::cout << "Ingresa tu nombre de usuario" << std::endl;
    std::cin >> usuarioU;

    while(Aux2){
    if(usuario == usuarioU){
           std::cout << "Introduce la contraseÃ±a de " << NumCar <<" digitos:" << std::endl;
           std::cin >> contrasenaU;
  
        while(Aux){
            
             
             if(contrasenaU.size() < NumCar){
                std::cout << "La contraseÃ±a es de " << NumCar << " carcteres, ingresa tu contraseÃ±a nuevamente: " << std::endl;
                std::cin >> contrasenaU;
             }else if(contrasenaU == contrasena){
                   std::cout << "ContraseÃ±a correcta" << std::endl;
                   Aux = false;
                   Aux2 = false;
                   }else{
                   std::cout << "ContraseÃ±a Incorrecta, el tamaÃ±o de la contraseÃ±a es de " << NumCar << std::endl;
                   std::cin >> contrasenaU;
                }
          }
            
        }else{
                   std::cout << "Usuario no encontrado, introducelo nuevamente:" << std::endl;
                   std::cin >> usuarioU;
             } 
    } 
    
        return 0;
}
