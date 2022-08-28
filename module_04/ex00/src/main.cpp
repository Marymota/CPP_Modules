#include "../inc/Animal.hpp"
#include "../inc/Dog.hpp"
#include "../inc/Cat.hpp"

#include "../inc/WrongAnimal.hpp"
#include "../inc/WrongCat.hpp"

int main () {
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;

	j->makeSound();
	i->makeSound();
	meta->makeSound();
	
	const WrongAnimal* wmeta = new WrongAnimal();
	const WrongAnimal* wi = new WrongCat();

	std::cout << wi->getType() << " " << std::endl;
	wi->makeSound();
	wmeta->makeSound();

	return (0);
}
