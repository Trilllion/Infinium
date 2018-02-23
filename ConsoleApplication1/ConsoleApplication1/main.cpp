// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "Classes.h"
#include <array>



//main function
int main()
{
	//objects
	space head;
	
	
	//creating grid
	
	int grid = head.input_grid_size();
	head.grid_size = grid;
	head.array_to_int(head.coordinate_array);

	//two fake variables to loop through grid parameters
	int f_x = 0;
	int f_y = grid;
	//COORDINATE INCREMENTATION AND OBJECT CREATION LOOP
	while ( f_y >= 1)				// loop for y (1) value
	{
		while (f_x < grid)				// loop for x (0) value
		{
			head.create(f_x, f_y);			// create new space class object with parameters f_x and f_y which are used as constructor argument to set array
			f_x++;						// increase x value
		}
		
		f_y--;	
		head.create(f_x, f_y);			// decrease y value
		f_x = 0;						// reset x coordinate value
		
		
	}
	system("pause");
	return 0;
	
}

//DOES THIS WORK?
//Check 2