#include "../inc/span.hpp"

int main () {
    Span span(5);
    std::cout << "size: " << span.size() << std::endl;
    
    try { 
        span.addNumber(10);
        span.addNumber(20);
        span.addNumber(30);
        span.addNumber(40);
        span.addNumber(50);
    } catch (std::exception& e) {
        std::cerr << "Limit reached!" << std::endl;
    };

    try { 
        span.addNumber(60);
        span.addNumber(70);
    } catch (std::exception& e) {
        std::cerr << "Limit reached!" << std::endl;
    };
    
    for (int i = 0; i < span.size(); i++) {
        std::cout << span.getElement(i) << std::endl;
    }

    std::cout << "long span: " << span.longestSpan() << std::endl;
}

//Recursos
//https://cplusplus.com/reference/algorithm/fill_n/

