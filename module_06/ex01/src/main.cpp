#include "../inc/data.hpp"

int main () {

    Data data;

    Data* newData;
    
    std::cout << data << std::endl;

    uintptr_t ptr = data.serialize(&data);
    newData = data.deserialize(ptr);

    std::cout << ptr << std::endl;
    std::cout << "data: " << data << std::endl;
    std::cout << "newdata: " << *newData << std::endl;


}