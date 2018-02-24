#pragma once
#include <string>
class ships
{
public:
	ships();
	~ships();
	 int max_health = 0;
	 int attack = 0;
	 std::string name;
	 ships *create(std::string x);
};

