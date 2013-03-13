#include <iostream>
#include <iomanip>
#include <math.h>
main()
{
	float  x;
	float  y;
	for  (y = 0.2; y <= 4; y = y + 0.2)
	{
		for (x = 0.5; x <= 1.5; x = x + 0.5)
			std::cout<<std::setprecision (3) <<std::setfill (' ') <<std::setw (12)  <<100 *(sin(x) + sin(y))  << " ";
		std::cout << std::endl;
	}
}



