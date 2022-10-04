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

/*	Reinterpret_cast can typecast any pointer to any other data type.
		It is only used to typecast any pointer to its original type.

		References: geeksforgeeks.org/reinterpret-cast-in_c-type-casting-operators/
*/