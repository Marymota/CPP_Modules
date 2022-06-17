#ifndef CONTACT_H
#define CONTACT_H

class Contact{
public:
	void		addcontact();
	void		getall();
	std::string	getcontact(std::string value);
private:
	std::string first_name;					
	std::string last_name;
	std::string nickname;
	std::string phone_number;
	std::string darkest_secret;
};

#endif