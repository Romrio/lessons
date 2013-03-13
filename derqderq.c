#include <stdio.h>
#include <assert.h>

float celsiys(int f);

//(5.0/9.0)*(fahr - 32)

/*печать таблицы темперетур по Фаренгейту  Цельсию*/
main()
{
	assert((int)celsiys(300) == (int)148.999);
	assert(7 == 7);
	assert(5 == 6);
	assert(0);

}

float celsiys (int fahr)
{
        float cel;
        cel = (5.0/9.0)*(fahr - 3);
        return cel;
}

