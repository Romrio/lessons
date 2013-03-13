#include <stdio.h>
 /* подсчет цифр, символов-разделителей и прочих символов*/
main()
{
	int c, i,g, nwhite, nother;
	int ndigit [10];
	nwhite = nother = 0;
	for ( i = 0; i < 10; ++i)
		ndigit [i]= 0;
	while (( c = getchar()) !=EOF)
		if ( c >= '0' && c <= '9' )
			++ndigit [c - '0'];//ndigit[] = ndigit[] +1 
		else if ( c == ' ' || c == '\n' || c == '\t')
			++nwhite;
		else
			++nother;
	printf ("цифры =\n");
	for (i=0; i < 10; ++i) {
		for (g = 0; g < ndigit[i]; ++g )
			printf ("." );
		printf("\n");
	}
	printf (", символы-разделители = %d, прочие %d\n", nwhite, nother);

}



