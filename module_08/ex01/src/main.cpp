#include "../inc/span.hpp"

int main()
{
  Span ssp = Span(1);
  ssp.addNumber(6);
	try {
 		std::cout << ssp.shortestSpan() << std::endl;
	} catch (std::exception& e) { std::cerr << e.what() << std::endl; }
	
	try {
  std::cout << ssp.longestSpan() << std::endl;
	} catch (std::exception& e) {  std::cerr << e.what() << std::endl; }

	try {
		Span sp = Span(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << "short: " << sp.shortestSpan() << std::endl;
		std::cout << "long: " << sp.longestSpan() << std::endl;
	} catch (std::exception& e) { std::cerr << e.what() << std::endl; }

	try {
		Span lsp(20000);
		lsp.addNumber(20000, 100);
		std::cout << "short: " << lsp.shortestSpan() << std::endl;
		std::cout << "long: " << lsp.longestSpan() << std::endl;
	} catch (std::exception& e) { std::cerr << e.what() << std::endl; }

	return 0;
}

//Recursos
//https://cplusplus.com/reference/algorithm/fill_n/

