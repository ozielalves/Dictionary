#include "dictionary.hpp"

int main(int argc, char *argv[])
{
	struct Comparator{
	
		bool operator() (const int &lhs, const int &rhs ) const { return lhs < rhs; }
	};
	DSAL<int, int,Comparator> Dict(10);

	Dict.insert(4,7);
	std::cout << Dict << std::endl;

	Dict.insert(3,6);
	std::cout << Dict << std::endl;

	Dict.insert(1,5);

	std::cout << Dict << std::endl;

	Dict.insert(2,5);

	std::cout << Dict << std::endl;

	Dict.insert(7,5);
	
	std::cout << Dict << std::endl;
	
	std::cout << "Dict Min : " <<  Dict.min() << std::endl;
	std::cout << "Dict Max : " <<  Dict.max() << std::endl;

	return 0;
}
