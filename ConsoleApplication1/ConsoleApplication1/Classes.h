#pragma once
#include "stdafx.h"
#include <iostream>
#include <sstream>


class space  {
public:
	
	//variables
	const int grid_size = 20;


	//ship type placeholder
	int coordinate = 0;
	int coordinate_array[2];
	//functions
	int array_to_int(int a[] );
	space();													//constructor
	void set_coordinate(int x, int y);
	void print_grid();
};

