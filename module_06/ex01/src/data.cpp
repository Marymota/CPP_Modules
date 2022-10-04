#include "../inc/data.hpp"


    Data::Data() : n(10), str("Hello Worlds!") {}

    Data::Data( Data& obj){
      *this = obj;
    }

    Data& Data::operator=( Data& obj){
        this->n = obj.n;
				this->str = obj.str;
        return *this;
    }

    Data::~Data(){}

    int Data::getint() const{
        return this->n;
    }

    std::string Data::getstr() const{
        return this->str;
    }

    uintptr_t Data::serialize(Data* ptr){
			return reinterpret_cast<uintptr_t>(ptr);
    }

    Data* Data::deserialize(uintptr_t raw){
        return reinterpret_cast<Data*>(raw);
    }

    std::ostream& operator<<(std::ostream& output, const Data& obj) {
	output << obj.getint() << " " << obj.getstr() << std::endl;
    return output;
}