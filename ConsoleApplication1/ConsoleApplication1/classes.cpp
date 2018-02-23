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

void space::print()
{
	std::cout << coordinate_array[0] << "-" << coordinate_array[1] << std::endl;
}


