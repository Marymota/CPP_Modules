#include "../inc/AMateria.hpp"
#include "../inc/Ice.hpp"
#include "../inc/Cure.hpp"
#include "../inc/IMateriaSource.hpp"
#include "../inc/MateriaSource.hpp"
#include "../inc/ICharacter.hpp"
#include "../inc/Character.hpp"

/* Still need to implement:
		character can't be able to equip materials not in the MateriaSource
		unequiped Materia shall be deleted or go back to Materia Source
		equiped Materia should still be in the MateriaSource or no t?
*/

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
	
	me->use(0, *bob);
	me->use(1, *bob);

	delete bob;
	delete me;
	delete src;

	std::cout << std::endl;
	std::cout << "------------------------------------" << std::endl;
	std::cout << std::endl;

	Ice ice_materia;
	Cure cure_materia;
	Character jinx("jinx");
	Character chansey("chansey");
	AMateria *clone = ice_materia.clone();

	ice_materia.use(jinx);
	clone->use(jinx);
	cure_materia.use(chansey);

	return (0);
}