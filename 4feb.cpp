#include <iosktream>
#include <fstream>
#include <math.h>
using namespace std;
main()
{
//y = 2Pr*r + l/360
	float l;
	float P = 3.14;
	float r;
	float y;
	ofstream true35;
	true35.open ("true35.txt");
	for (r = 1;r <= 3; r = r + 1)
		for (l = 1;l <= 2;l = l + 1)
		{
			y = 2*P*r*r + l/360;
			true35 <<r <<" " <<l <<" "<<y << endl;
		}
	true35.close();
}



