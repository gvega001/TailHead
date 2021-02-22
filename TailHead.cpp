// TailHead.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

void function(int n)
	{
	if(n>0)
		{
		function(n - 1);
			printf("%d ", n);
		

		}
	}
int main()
{
	int x = 3;
	function(x);

	return 0;
}

