#include <iostream>
#include <cctype>
#include <cstring>
using std::string;

class PhoneBook {
	public:
		void ADD();
		void SEARCH();
		void REMOVE();
};

class Contact {
private:
	string	First_name;
	string	Last_name; 
	string	Nickname; 
	int		Phone_number;
	string	Darkest_secret;
public:
	void setFirstName(string fname) {
		First_name = fname;
	}
	string getFirstName(){
		return First_name;
	}
	void setLastName(string lname) {
		Last_name = lname;
	}
	string getLastName(){
		return Last_name;
	}
	void setNickname(string nick) {
		Nickname = nick;
	}
	string getNickname(){
		return Nickname;
	}
	void setPhone(int phone) {
		Phone_number = phone;
	}
	int getPhone(){
		return Phone_number;
	}
	void setSecret(string secret) {
		Darkest_secret = secret;
	}
	string getSecret(){
		return Darkest_secret;
	}
	void add() {
		std::cout << "First_name: "		<< First_name		<< std::endl;
		std::cout << "Last_name: "		<< Last_name		<< std::endl;
		std::cout << "Nickname: "		<< Nickname			<< std::endl;
		std::cout << "Phone_number: "	<< Phone_number		<< std::endl;
		std::cout << "Darkest_secret: " << Darkest_secret	<< std::endl;
	}
	Contact(string	first_name, string	last_name, string	nickname, int phone_number, string	darkest_secret){
		First_name = first_name;
		Last_name = last_name;
		Nickname = nickname;
		Phone_number = phone_number;
		Darkest_secret = darkest_secret;
	}

};

int main(int argc, char *argv[])
{
	(void) argc;
	(void) argv;
	Contact contact = Contact("Mar", "Mota", "Marmota", 123456789, "Laziness");
	contact.add();
	contact.setPhone(987654321);
	std::cout << contact.getFirstName() << " has phone number " << contact.getPhone();
}