#include "../inc/data.hpp"

int main () {

    Data data;
		Data convert;
    Data* newData;
    
		std::cout << "data: " << data << std::endl;

    uintptr_t dataptr = convert.serialize(&data);
		newData = convert.deserialize(dataptr);

    std::cout << "data: " << dataptr << std::endl;
		std::cout << "newData: " << *newData << std::endl;
}