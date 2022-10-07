#include "../inc/iter.hpp"

// EVALUATION TEST
// int main() {
// 	int tab[] = { 0, 1, 2, 3, 4 }; // <--- I never understood why you can't write int[] tab. Wouldn't that make more sense?
// 	Awesome tab2[5];
// 	iter( tab, 5, print );
// 	iter( tab2, 5, print );
// 	return 0;
// }

 int main () {
 	int array[] = {0, 1, 2, 3, 4, 5};
 	std::string array2[] = {"albatroz", "baltazar", "cards", "draw", "extras", "failed"};
 	iter(array, 6, print);
 	std::cout << std::endl;
 	iter(array, 6, mult);
 	std::cout << std::endl;
 	iter(array2, 6, firstletter);
	std::cout << std::endl;
 	return 0;
 }