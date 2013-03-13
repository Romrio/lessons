#include <stdio.h>
#include <iostream>
using namespace std;
#define IN 1 /*внутри слова*/
#define OUT 0 /*вне слова*/

/*подсчет строк, слов и символов*/

/*1 2 3 */
main()

{
	int c, nl, nw, nc, state;
	state = OUT;
	nl = nw = nc = 0;
	while (( c =  getchar()) != EOF) { //end of file
		cout<<(char)c << flush;
	}
	//printf ("%d %d %d\n", nl, nw, nc);
//	cout<<nl<<" "<<nw<<" "<<nc<<endl;
}


