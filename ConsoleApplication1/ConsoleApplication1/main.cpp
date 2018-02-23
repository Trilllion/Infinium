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
	space over_grid[625];
	int grid = head.grid_size;
	head.array_to_int(head.coordinate_array);

	//two fake variables to loop through grid parameters
	int f_x = 0;
	int f_y = 25;
	//COORDINATE INCREMENTATION AND OBJECT CREATION LOOP
	for (int k = f_y; k > 0; k--)
	{
		
		for (int i = 0; i < grid; i++)
		{
			over_grid[f_x].set_coordinate((i+1), k);
			f_x++;
		}
		
	}
	
	for (int i = 0; i < grid*grid; i++)
		over_grid[i].print();
	
	return 0;
	
}

//DOES THIS WORK?
//Check 2