#include "dictionary.hpp"
#include <cassert>

int main(int argc, char *argv[])
{
	struct Comparator{
	
		bool operator() (const int &lhs, const int &rhs ) const { return lhs < rhs; }
	};

/*--------------------------- Constructor Test ------------------------------*/

	std::cout << "\n                                                    Constructor Testing..." << "                                             \n";

	DSAL<int, int,Comparator> Dict(10);
	assert( Dict.full() == false );
	assert( Dict.empty() );
	assert( Dict.capacity() == 10 );
	assert( Dict.size() == 0 );	

	std::cout << "                                                     Successfully done..." << "                                             \n";
	std::cout << "\nCurrent Dictionary: \n";	

	std::cout << "\t" << Dict << std::endl;

/*---------------------------- Insertion Test -------------------------------*/ 

	std::cout << "\n                                                     Insertion Testing..." << "                                             \n";
	Dict.insert(4,7);
	std::cout << "\nCurrent Dictionary: \n";	

	std::cout << "\t" << Dict << std::endl;

	Dict.insert(3,6);
	std::cout << "\nCurrent Dictionary: \n";	

	std::cout << "\t" << Dict << std::endl;

	Dict.insert(1,5);

	std::cout << "\nCurrent Dictionary: \n";	

	std::cout << "\t" << Dict << std::endl;

	Dict.insert(2,5);

	std::cout << "\nCurrent Dictionary: \n";	

	std::cout << "\t" << Dict << std::endl;

	Dict.insert(7,5);
	
	std::cout << "\nCurrent Dictionary: \n";	

	std::cout << "\t" << Dict << std::endl;

	std::cout << "\n                                                     Successfully done..." << "                                             \n";

/*--------------------------- Min and Max Test ------------------------------*/	
	
	std::cout << "\n                                                 Minimum and Maximum Testing..." << "                                             \n";

	std::cout << "Dict Min : " <<  Dict.min() << std::endl;
	std::cout << "Dict Max : " <<  Dict.max() << std::endl;

	std::cout << "\n                                                     Successfully done..." << "                                             \n";

 

	return EXIT_SUCCESS;
}
