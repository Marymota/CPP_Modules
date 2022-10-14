#include "../inc/MutantStack.hpp"

int main()
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
	return 0;
}

//	Recursos
//	https://cplusplus.com/reference/algorithm/fill_n/
//	https://www.enseignement.polytechnique.fr/informatique/INF478/docs/Cpp/en/cpp/container/stack.html
//	https://cplusplus.com/reference/stack/stack/
//	https://www.simplilearn.com/tutorials/cpp-tutorial/iterators-in-cpp