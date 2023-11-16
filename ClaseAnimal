#include <iostream>
#include <string>

class Animal{
	public:
		
		Animal(std::string nombre){
			this -> nombre = nombre;
		}
		
		void AnimalComiendo(){
			std::cout << "El " << nombre << " esta comiendo" << std::endl;
		}
		
		std:: string getNombre(){
			return nombre;
		}
		
	private:
		std::string nombre;
};

class Carnivoros : public Animal{
public: 
	Carnivoros(std::string nombre, std::string AlimentoPrincipal) : Animal(nombre){
		this -> AlimentoPrincipal = AlimentoPrincipal;
	}	
	
	void AnimalComiendo(){
		std::cout << "El " << getNombre() << " esta comiendo carne de " << AlimentoPrincipal << std::endl;
	}
	
	private:
		std::string AlimentoPrincipal;
};

int main(){
	Animal Panda("panda");
	Carnivoros Tigre ("Tigre","Ciervo");
	
	Panda.AnimalComiendo();
	Tigre.AnimalComiendo();
	return 0;
}
