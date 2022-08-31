#ifndef __CAT_HPP__
#define __CAT_HPP__

class Cat : public Animal{

	public:
		Cat();
		Cat(const Cat&);
		Cat& operator=(const Cat&);
		~Cat();
		
		void makeSound() const;

		void getIdeas();
		void setIdeas(std::string idea, int n);
	
	// creation of a private brain
	private:
		Brain* _brain;

};

#endif