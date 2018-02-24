#include "stdafx.h"
#include "ships.h"
#include <string>


ships::ships()
{
	 max_health = 0;
	 attack = 0;
	 name = "a";

	
}

ships * ships::create(std::string x)
{
	ships *store_address = new ships;
	return store_address;
}



