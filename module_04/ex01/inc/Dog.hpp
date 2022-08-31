#ifndef __DOG_HPP__
#define __DOG_HPP__

class Dog : public Animal {

	public:
		Dog();
		Dog(const Dog&);
		Dog& operator=(const Dog&);
		virtual ~Dog();

		void makeSound() const ;
		void getIdeas();
		void setIdeas(std::string idea, int n);
	
	// creation of a private brain
	private:
		Brain* _brain;

};

#endif