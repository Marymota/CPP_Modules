#include "../inc/data.hpp"


    Data::Data() : a(10), str("Hello World!") {}

    Data::Data( Data& obj){
        (void) obj;
    }

    Data& Data::operator=( Data& obj){
        (void) obj;
        return *this;
    }

    Data::~Data(){}

    int Data::getint() const{
        return this->a;
    }

    std::string Data::getstr() const{
        return this->str;
    }

    uintptr_t Data::serialize(Data* ptr){
        uintptr_t data = reinterpret_cast<uintptr_t>(ptr);
        return data;
    }

    Data* Data::deserialize(uintptr_t raw){
        Data* data = reinterpret_cast<Data*>(raw);
        return data;
    }

    std::ostream& operator<<(std::ostream& output, const Data& obj) {
	output << obj.getint() << " " << obj.getstr() << std::endl;
    return output;
}