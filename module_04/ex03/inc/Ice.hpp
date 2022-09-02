#ifndef __ICE_HPP__
#define __ICE_HPP__

class Ice : public AMateria { 
	Ice();
	Ice(const Ice&);
	Ice& operator=(const Ice&);
	~Ice();

	Ice(std::string const&);
};

#endif