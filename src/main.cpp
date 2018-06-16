#include "dictionary.hpp"
#include <cassert>

int main(int argc, char *argv[])
{
	struct intComparator{
	
		bool operator() (const int &lhs, const int &rhs ) const { return lhs < rhs; }
	};
<<<<<<< HEAD


// DSAL Testing
{

/*--------------------------- Constructor Test ------------------------------*/

	std::cout << "\n                                                    Constructor Testing..." << "                                             \n";

	DSAL<int, int,intComparator> Dict(10);
	assert( Dict.full() == false );
	assert( Dict.empty() );
	assert( Dict.capacity() == 10 );
	assert( Dict.size() == 0 );	

	std::cout << "                                                     Successfully done!" << "                                             \n";
	
	std::cout << "\nCurrent Dictionary: \n";	
=======

/*--------------------------- Constructor Test ------------------------------*/

	std::cout << "\n                                                    Constructor Testing..." << "                                             \n";

	DSAL<int, int,Comparator> Dict(10);
	assert( Dict.full() == false );
	assert( Dict.empty() );
	assert( Dict.capacity() == 10 );
	assert( Dict.size() == 0 );	

	std::cout << "                                                     Successfully done..." << "                                             \n";
	std::cout << "\nCurrent Dictionary: \n";	

>>>>>>> 8431ad2fda9e420632f37e4e7448a4cf8deef1a1
	std::cout << "\t" << Dict << std::endl;

/*---------------------------- Insertion Test -------------------------------*/ 

	std::cout << "\n                                                     Insertion Testing..." << "                                             \n";
<<<<<<< HEAD
	
	Dict.insert(4,7);
	
	std::cout << "\nCurrent Dictionary: \n";	
	std::cout << "\t" << Dict << std::endl;

	Dict.insert(3,6);
	
	std::cout << "\nCurrent Dictionary: \n";	
=======
	Dict.insert(4,7);
	std::cout << "\nCurrent Dictionary: \n";	

	std::cout << "\t" << Dict << std::endl;

	Dict.insert(3,6);
	std::cout << "\nCurrent Dictionary: \n";	

>>>>>>> 8431ad2fda9e420632f37e4e7448a4cf8deef1a1
	std::cout << "\t" << Dict << std::endl;

	Dict.insert(1,5);

	std::cout << "\nCurrent Dictionary: \n";	
<<<<<<< HEAD
=======

>>>>>>> 8431ad2fda9e420632f37e4e7448a4cf8deef1a1
	std::cout << "\t" << Dict << std::endl;

	Dict.insert(2,5);

	std::cout << "\nCurrent Dictionary: \n";	
<<<<<<< HEAD
=======

>>>>>>> 8431ad2fda9e420632f37e4e7448a4cf8deef1a1
	std::cout << "\t" << Dict << std::endl;

	Dict.insert(7,5);
	
	std::cout << "\nCurrent Dictionary: \n";	
<<<<<<< HEAD
	std::cout << "\t" << Dict << std::endl;

/*----------------------------- Reserve Test --------------------------------*/ 

	std::cout << "\n\tReserve Testing...\n";

	std::cout << "\nAn second Dictionary: \n";

	DSAL<int, int,intComparator> dict(2);

	std::cout << "\nCurrent Dictionary: \n";	
	std::cout << "\t" << dict << std::endl;

	dict.insert(2,3);
	dict.insert(3,4);
	dict.insert(4,5);

	std::cout << "\nCurrent Dictionary: \n";	
	std::cout << "\t" << dict << std::endl;

	dict.insert(5,6);

	std::cout << "\nCurrent Dictionary: \n";	
	std::cout << "\t" << dict << std::endl;

	std::cout << "\n                                                     Successfully done!" << "                                             \n";
=======

	std::cout << "\t" << Dict << std::endl;

	std::cout << "\n                                                     Successfully done..." << "                                             \n";
>>>>>>> 8431ad2fda9e420632f37e4e7448a4cf8deef1a1

/*--------------------------- Min and Max Test ------------------------------*/	
	
	std::cout << "\n                                                 Minimum and Maximum Testing..." << "                                             \n";

	std::cout << "Dict Min : " <<  Dict.min() << std::endl;
	std::cout << "Dict Max : " <<  Dict.max() << std::endl;

<<<<<<< HEAD
	std::cout << "\n                                                     Successfully done!" << "                                             \n";


/*------------------------------ Remove Test --------------------------------*/  

	std::cout << "\n                                                      Remove Testing..." << "                                             \n";

	std::cout << "\tRemoving the Minimum ID...\n";
	Dict.remove(Dict.min());
	
	std::cout << "\nCurrent Dictionary: \n";	
	std::cout << "\t" << Dict << std::endl;

	std::cout << "\n                                                     Successfully done!" << "                                             \n";
}

// DAL Testing

{

/*--------------------------- Constructor Test ------------------------------*/

	std::cout << "\n                                                    Constructor Testing..." << "                                             \n";

	DAL<int, int, intComparator> dict(5);
	assert( dict.full() == false );
	assert( dict.empty() );
	assert( dict.capacity() == 5 );
	assert( dict.size() == 0 );

	std::cout << "\nCurrent Dictionary: \n";	
	std::cout << "\t" << dict << std::endl;

	std::cout << "\n                                                     Successfully done!" << "                                             \n";

/*---------------------------- Insertion Test -------------------------------*/ 

	std::cout << "\n                                                     Insertion Testing..." << "                                             \n";

	assert ( dict.insert(0, 100) );
	assert( not dict.empty() );
	assert ( dict.insert(3, 150) );
	assert ( dict.insert(0, 656) == false ); // Doubled key
	assert ( dict.insert(7, 899) );
	assert ( dict.insert(2, 745) );
	assert ( dict.insert(6, 445) );
	assert ( dict.insert(8,   0) == false ); // FULL Dictionary
	assert( dict.size() == 5 );

	std::cout << "\nCurrent Dictionary: \n";	
	std::cout << "\t" << dict << std::endl;

	std::cout << "\n                                                     Successfully done!" << "                                             \n";



/*--------------------- Sucessor and Predecessor Test -----------------------*/
	std::cout << "\n                                              Sucessor and Predecessor Testing..." << "                                             \n";

	int chave; //aux para testes dos metodos
	assert( dict.sucessor(7, chave) );
	assert( chave == 2 );   //chave recuperada na busca
	assert( dict.sucessor(6, chave) == false ); //ultimo elemento nao tem sucessor
	assert( chave == 2 );   //valor continua o antigo
	assert( dict.predecessor(7, chave) );
	assert( chave == 3 );   //chave recuperada na busca
	assert( dict.predecessor(0, chave) == false ); //primeiro elemento nao tem antecessor
	assert( chave == 3 );   //valor continua o antigo
	std::cout << "\n                                                     Successfully done!" << "                                             \n";


/*------------------------------ Search Test --------------------------------*/
	std::cout << "\n                                                      Search Testing..." << "                                             \n";
	
	int elem; // Aux variable to test search methode
	assert( dict.search(2, elem) ); // Exists
	assert( elem == 745 );   // Recovered value from the search
	assert( dict.search(8, elem) == false ); // Does not exists
	assert( elem == 745 );   // The element stills the same(wasn't setted)
	std::cout << "\n                                                     Successfully done!" << "                                             \n";
	

/*------------------------------ Remove Test --------------------------------*/  

	std::cout << "\n                                                      Remove Testing..." << "                                             \n";

	assert( dict.remove(5) == false ); // Does not exists
	assert( dict.remove(3) );          // Exists
	assert( dict.remove(0) );
	assert( dict.size() == 3 );
	assert( dict.remove(7) );
	assert( dict.remove(2) );
	assert( dict.remove(6) );
	assert( dict.remove(7) == false ); // EMPTY Dictionary
	
	std::cout << "\nCurrent Dictionary: \n";	
	std::cout << "\t" << dict << std::endl;

	std::cout << "\n                                                     Successfully done!" << "                                             \n";

}

// Data type: String - Testing
{

/*--------------------------- Constructor Test ------------------------------*/

	std::cout << "\n                                                    Constructor Testing..." << "                                             \n";
	DAL<int, std::string, intComparator> dict;
	assert( dict.full() == false );
	assert( dict.capacity() == 50 );
	std::cout << "\nCurrent Dictionary: \n";	
	std::cout << "\t" << dict << std::endl;
	std::cout << "\n                                                     Successfully done!" << "                                             \n";

/*---------------------------- Insertion Test -------------------------------*/

	std::cout << "\n                                                     Insertion Testing..." << "                                             \n";
	assert ( dict.insert(5, "odio") );
	assert( not dict.empty() );
	assert ( dict.insert(3, "rancor") );
	assert ( dict.insert(9, "solidao") );
	assert ( dict.insert(3, "discordia") == false ); // Doubled key
	std::cout << "\nCurrent Dictionary: \n";	
	std::cout << "\t" << dict << std::endl;
	std::cout << "\n                                                     Successfully done!" << "                                             \n";

/*--------------------------- Min and Max Test ------------------------------*/

	std::cout << "\n                                                 Minimum and Maximum Testing..." << "                                             \n";
	assert( dict.min() ==  3 );
	assert( dict.max() ==  9 );
	std::cout << "\n                                                     Successfully done!" << "                                             \n";	

/*------------------------------ Search Test --------------------------------*/

	std::cout << "\n                                                      Search Testing..." << "                                             \n";
	std::string elem;
	assert( dict.search(3, elem) ); // Exists
	assert( elem == "rancor" );   // Recovered value from the search
	assert( dict.search(8, elem) == false ); // Does not exists
	assert( elem == "rancor" );   // Last value stills
	std::cout << "\n                                                     Successfully done!" << "                                             \n";	


/*------------------------------ Remove Test --------------------------------*/ 

	std::cout << "\n                                                      Remove Testing..." << "                                             \n";
	assert( dict.remove(5) ); 
	assert( dict.remove(0) == false ); // Does not exists
	assert( dict.remove(9) );        
	assert( dict.size() == 1 );
	assert( dict.remove(3) );
	assert( dict.remove(2) == false ); // EMPTY Dictionary
	std::cout << "\nCurrent Dictionary: \n";	
	std::cout << "\t" << dict << std::endl;
	std::cout << "\n                                                     Successfully done!" << "                                             \n";
}

	std::cout << "\n                                                       Exit Success!" << "                                             \n";
=======
	std::cout << "\n                                                     Successfully done..." << "                                             \n";

 
>>>>>>> 8431ad2fda9e420632f37e4e7448a4cf8deef1a1

	return EXIT_SUCCESS;
}
