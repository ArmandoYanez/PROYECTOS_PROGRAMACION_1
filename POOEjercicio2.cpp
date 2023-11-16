#include <iostream>
#include <string>


class Animal{
	public:
		
		Animal(std::string nombre, int id){
			this -> nombre = nombre;
			this -> id = id;
		}
		
		void AnimalComiendo(){
			std::cout << "El " << nombre << " esta comiendo" << std::endl;
		}
		
		
		std:: string getNombre(){
			return nombre;
		}
		
	private:
		std::string nombre;
		int id;
		
	protected:
	    friend class PersonalZoo;
	    virtual int GetidAnimal(){
	        return this->id;
	    }
};

//Encapsulamiento
class PersonalZoo{
  public:
    int GetidAnimal(Animal animal){
        return animal.GetidAnimal();
    }

};

//Polimorfismo, herencia y sobrecarga
class Carnivoros : public Animal{
public: 
	Carnivoros(std::string nombre, std::string AlimentoPrincipal, int id) : Animal(nombre, id){
		this -> AlimentoPrincipal = AlimentoPrincipal;
	}	
	
	void AnimalComiendo(){
		std::cout << "El " << getNombre() << " esta comiendo " << AlimentoPrincipal << std::endl;
	}
	
	void AnimalComiendo(float kilos){
		std::cout << "El " << getNombre() << " esta comiendo " << kilos << " kilos de  " << AlimentoPrincipal << std::endl;
	}
	
	private:
		std::string AlimentoPrincipal;
};

class Herbivoros : public Animal{
public: 
	Herbivoros(std::string nombre, std::string AlimentoPrincipal, int id) : Animal(nombre, id){
		this -> AlimentoPrincipal = AlimentoPrincipal;
	}	
	
	void AnimalComiendo(){
		std::cout << "El " << getNombre() << " esta comindo " << AlimentoPrincipal << std::endl;
	}
	
	void AnimalComiendo(float kilos){
		std::cout << "El " << getNombre() << " esta comiendo " << kilos << " kilos de " << AlimentoPrincipal << std::endl;
	}
	
	private:
		std::string AlimentoPrincipal;
};




int main(){
    
	Animal Panda("panda",01);
	Carnivoros Tigre ("Tigre","Ciervo",02);
	Herbivoros Ciervo ("Ciervo","Plantas",03);
	PersonalZoo Armando;
	
	Panda.AnimalComiendo();
	Tigre.AnimalComiendo(1);
	Ciervo.AnimalComiendo(0.8);
	
	std::cout<< Armando.GetidAnimal(Panda) << std::endl;
	
	return 0;
}
