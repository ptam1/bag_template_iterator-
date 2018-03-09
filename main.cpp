#include <cstdlib>
#include <iostream>
#include <set>
#include <algorithm>
#include "node2.h"
#include "bag5.h"

using namespace std;



int main()
{
	
	bag<int> newBag;
    newBag.insert(7);
    newBag.insert(6);
    newBag.insert(5);
	newBag.insert(4);
    newBag.insert(3);
    newBag.insert(2);
	newBag.insert(1);
	
	//This prints Items from x to y but not including the end
	std::cout << "Bag     [";
	for(bag<int>::iterator cursor = newBag.begin(); cursor != newBag.end(); ++cursor)
       { 
		   std::cout<<*cursor<< " "; 
		}
	std::cout << "]";	
	std::cout << endl;	
		
	int x = 2;
	int y = 5;
	std::cout << "x = " << " " << x << std::endl;
	std::cout << "y = " << " " << y << std::endl;
	std::cout << "prints" << " ";
	newBag.print_value_range(x, y);
	
	//If no "y" is found, then it prints from x to the end
	std::cout << "Bag     [";
	for(bag<int>::iterator cursor = newBag.begin(); cursor != newBag.end(); ++cursor)
       { 
		   std::cout<<*cursor<< " "; 
		}
	std::cout << "]";	
	std::cout << endl;	
		
	int x2 = 2;
	int y2 = 78;
	std::cout << "x = " << " " << x2 << std::endl;
	std::cout << "y = " << " " << y2 << std::endl;
	std::cout << "prints" << " ";
	newBag.print_value_range(x2, y2);
	
	//If no "y" is found, then it prints from x to the end
	std::cout << "Bag     [";
	for(bag<int>::iterator cursor = newBag.begin(); cursor != newBag.end(); ++cursor)
       { 
		   std::cout<<*cursor<< " "; 
		}
	std::cout << "]";	
	std::cout << endl;	
		
	int x3 = 2;
	int y3 = 1;
	std::cout << "x = " << " " << x3 << std::endl;
	std::cout << "y = " << " " << y3 << std::endl;
	std::cout << "prints" << " ";
	newBag.print_value_range(x3, y3);
	
    //This prints "nothing" because x is found 
	std::cout << "Bag     [";
	for(bag<int>::iterator cursor = newBag.begin(); cursor != newBag.end(); ++cursor)
       { 
		   std::cout<<*cursor<< " "; 
		}
	std::cout << "]";	
	std::cout << endl;	
		
	int x4 = 8;
	int y4 = 5;
	std::cout << "x = " << " " << x4 << std::endl;
	std::cout << "y = " << " " << y4 << std::endl;
	std::cout << "prints" << " ";
	newBag.print_value_range(x4, y4);
	
	std::cout << "Testing Remove Repetitions Function" << std::endl;
	bag<int> newBag2;
    newBag2.insert(1);
    newBag2.insert(1);
    newBag2.insert(1);
	newBag2.insert(4);
    newBag2.insert(3);
    newBag2.insert(1);
	newBag2.insert(2);
	
	std::cout << "Bag     [";
	for(bag<int>::iterator cursor = newBag2.begin(); cursor != newBag2.end(); ++cursor)
       { 
		   std::cout<<*cursor<< " "; 
		}
	std::cout << "]";
	std::cout << std::endl;
	newBag2.remove_repetitions();
	std::cout << "Bag After    [";
	for(bag<int>::iterator cursor = newBag2.begin(); cursor != newBag2.end(); ++cursor)
       { 
		   std::cout<<*cursor<< " "; 
		}  
	std::cout << "]";   
	std::cout << std::endl;

    

	return EXIT_SUCCESS;
}


