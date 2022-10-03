#ifndef __DATA_HPP__
#define __DATA_HPP__

#include <iostream>
#include <stdint.h>

class Data {

    public:

        Data();
        Data( Data& );
        Data& operator=( Data& obj);
        ~Data();

        uintptr_t serialize(Data* ptr);
        Data* deserialize(uintptr_t raw);

        int getint() const;
        std::string getstr() const;


    private:
        int a;
        std::string str;
};

std::ostream& operator<<(std::ostream&, const Data&); //Overload (<<) operator


#endif