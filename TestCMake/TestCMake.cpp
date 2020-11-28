// TestCMake.cpp : Defines the entry point for the application.
//

#include "TestCMake.h"



int main()
{
	std::vector<int> vec_i;
	
	for (int i = 0; i < 10; i++)
	{
		vec_i.push_back(i);
	}

	for (int val : vec_i)
	{
		std::cout << val << std::endl;
	}
	return 0;
}
