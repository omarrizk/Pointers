#include <iostream>
#include <string.h>

class Test {
	std::string food;
	public:
		void pointerMethod() {
			food = "apple";
			std::string* ptr = &food;
			std::cout << ptr << std::endl;
			std::cout << "derefencing pointer" << "\n";
			std::cout << *ptr << std::endl;
			*ptr = "pizza"; // changed value of pointer
			std::cout << *ptr << std::endl; 
			std::cout << ptr << std::endl; // address
		}

};

int main() {
	Test pointers;
	pointers.pointerMethod();
	return 0;
}