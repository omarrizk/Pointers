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
		}
};

int main() {
	Test pointers;
	pointers.pointerMethod();
	return 0;
}