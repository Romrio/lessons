#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main()
{
  srand ( time(NULL)) ;
  int x, n;
  x = rand() % 100 + 1;
  do {
	printf ("введите число");
	scanf ("%d", &n);
	if (n > x)
	  printf ("%d больше загаданого числа\n",n);
	if (n <x)
	  printf ("%d  менше загаданого числа\n",n);
	if (n == x)
	  printf ("%d равно загаданому числу, поздравляем\n",n);
  } while (x != n);

}




