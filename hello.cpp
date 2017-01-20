#include <iostream>

int main(int argc, char * argv[]) {
	if (argc > 1 ) {
		std::cout << "hello, world. " << argv[1] << std::endl;
	} else {
		std::cout << "hello, world " << std::endl;
	}
	return 0;
}
