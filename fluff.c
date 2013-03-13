#include <stdio.h>
#include <math.h>
main()
{
	float p = 3.14;
	float  A = 0.5;
	float x1, x2;
	int n;
	for (n = -5; n <= 12; n = n + 1 )
	{
		x1 = acos(A) + 2*p*n;
                x2 = 2*p*n - acos(A) ;
		printf("%d\t%.2f\t%.2f\t%.2f\n", n,x1,x2,-acos(1));
	}
	//x = +-arccosA + 2pn, n є Z
}
