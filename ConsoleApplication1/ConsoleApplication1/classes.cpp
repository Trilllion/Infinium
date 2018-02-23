#include "stdafx.h"
#include "Classes.h"
#include <iostream>
#include <sstream>

int space::input_grid_size()
{
	int n;
	std::cout << "Please enter grid size";
	std::cin >> n;
	return n;
}

// NEEDS CHECKING


int space::array_to_int(int a[] )
{

	
	std::stringstream ss;
	

	for (unsigned i = 0; i < sizeof a ; ++i)
		ss << a[i];

	int result;
	ss >> result;
	return result;
}

space *space::create(int x, int y)
{
	space *store_address = new space (x,y);
	object_address = store_address;
	temporary_address = store_address;
	return store_address;	
}

space::space()
{
	coordinate_array[0] = 0;
	coordinate_array[1] = grid_size;
}

space::space(int x, int y)
{
	 coordinate_array[0] = x;
	 coordinate_array[1] = y;
	
	 
}


