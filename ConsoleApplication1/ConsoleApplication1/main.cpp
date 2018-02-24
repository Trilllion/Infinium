// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "Classes.h"
#include"ships.h"
#include <string>



//main function
int main()
{
	//objects
	space head;
	ships obj;
	
	//creating grid
	space over_grid[625];
	int grid = head.grid_size;
	head.array_to_int(head.coordinate_array);

	//two fake variables to loop through grid parameters
	int f_x = 0;
	int f_y = grid;
	//COORDINATE INCREMENTATION AND OBJECT CREATION LOOP
	for (int k = f_y; k > 0; k--)
	{
		
		for (int i = 0; i < grid; i++)
		{
			over_grid[f_x].set_coordinate((i+1), k);
			f_x++;
		}
		
	}
	void print_grid();
	{
		std::cout << "  " ;
		for (int i = 1; i <= grid; i++)
		{
			if (i < 10)
			{
				std::cout << "  " << i << "  ";
			}
			if (i >= 10)
			{
				std::cout << " " << i << "  ";
			}
		}
		std::cout << "" << std::endl;
		for (int k = grid; k > 0; k--)
		{
			std::cout << k;
			for (int i = 0; i < grid; i++)
			{
				 over_grid[i].print_grid();
			}
			std::cout << "" << std::endl;
			std::cout << "" << std::endl;

		}
	}
	return 0;
	
}

//DOES THIS WORK?
//Check 2