#include <stdio.h>

#define IN 1 /*внутри слова*/
#define OUT 0 /*вне слова*/

/*подсчет строк, слов  и символов*/
main()
{
	int c, nl, nw, nc, state;
	int a [20];
	int i;
	int g;
	state = OUT;
	for (i = 0; i < 20; i++)
		a [i] = 0;
	nl = nw = nc = 0;
	while (( c = getchar ()) != EOF) {
		++nc;
		if ( c == ' ' || c == '\n' || c == '\t' ) {
			state = OUT;
			a[nc]++;
			nc = 0;
		}
		else if ( state == OUT ) {
			state = IN;
			++nw;
			}
		}
	printf ("%d\n", nw ) ;
/*	for (i = 0;i < 20; i++) {
		for (g = 0;g < a[i];g++)
			printf (".");
		printf ("\n");
	}*/

}


