#ifndef __DOG_HPP__
#define __DOG_HPP__

class Dog : public Animal{

	public:
		Dog();
		Dog(const Dog&);
		Dog& operator=(const Dog&);
		~Dog();

		void makeSound() const ;

};

#endif