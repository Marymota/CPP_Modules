#include "../inc/AMateria.hpp"
#include "../inc/Ice.hpp"
#include "../inc/Cure.hpp"
#include "../inc/IMateriaSource.hpp"
#include "../inc/MateriaSource.hpp"
#include "../inc/ICharacter.hpp"
#include "../inc/Character.hpp"

// int main (void) {
// 
// 	IMateriaSource* src = new MateriaSource();
// 	src->learnMateria(new Ice());
// 	src->learnMateria(new Cure());
// 
// 	ICharacter* me = new Character("me");
// 
// 	AMateria* tmp;
// 	tmp = src->createMateria("ice");
// 
// 	me->equip(tmp);
// 	tmp = src->createMateria("cure");
// 	me->equip(tmp);
// 	ICharacter* bob = new Character("bob");
// 	
// 	me->use(0, *bob);
// 	me->use(1, *bob);
// 
// 	delete bob;
// 	delete me;
// 	delete src;
// 
// 	return (0);
// }

int main (void) {

	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");

	AMateria* tmp;
	tmp = src->createMateria("ice");

	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	me->equip(tmp);
	me->equip(tmp);
	me->equip(tmp);
	
	me->use(0, *bob);
	me->use(1, *bob);
	me->use(2, *bob);
	me->use(3, *bob);
	me->use(4, *bob);

	delete bob;
	delete me;
	delete src;
	delete tmp;

	return (0);
}

// Where to store all the created Materia so that we can equip it or delete it later?