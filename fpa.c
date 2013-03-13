#include <stdio.h>
#include <math.h>
main()
{
	float x;
	float y;
	for  (x = 0;x <= 1;x = x +  0.2)
	{
		y = sin(x) + cos(x);
		printf ("%.1f\t%.1f\n", x,y);
	}
 	//y = sin(x) +  cons(x)
}

