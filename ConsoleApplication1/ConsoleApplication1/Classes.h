#pragma once
#include "stdafx.h"
#include <iostream>
#include <sstream>


class space  {
public:
	
	//variables
	space *object_address;
	int grid_size = 25;
	
		//linked list data and address
	//ship type placeholder
	int coordinate = 0;
	int coordinate_array[2];
	//functions
	int input_grid_size();
	int array_to_int(int a[] );
	space *create(int x, int y);
	space();													//constructor
	void set_coordinate(int x, int y);
	void print();
	//void print_table();
};

