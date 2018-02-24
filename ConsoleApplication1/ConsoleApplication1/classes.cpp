#include "stdafx.h"
#include "Classes.h"
#include <iostream>
#include <string>



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


space::space()
{
	coordinate_array[0] = 0;
	coordinate_array[1] = grid_size;
}

void space::set_coordinate(int x, int y)
{
	 coordinate_array[0] = x;
	 coordinate_array[1] = y;
	
	 
}

void space::print_grid()
{
	std::cout << "  +  ";
}


