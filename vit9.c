#include <stdio.h>
float celsiys(int f);

//(5.0/9.0)*(fahr - 32)

/*печать таблицы темперетур по Фаренгейту  Цельсию*/
main()
{
	int fahr;
	for ( fahr = 0;fahr <= 300; fahr = fahr + 20)
		printf ("%3d %f\n", fahr,celsiys(fahr) );
}

float celsiys (int fahr)
{
	float cel;
	cel = (5.0/9.0)*(fahr - 32);
	return cel;
}

