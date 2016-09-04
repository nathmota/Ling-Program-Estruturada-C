#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main () {
	int x,y,w;

printf ("Digite um valor para x: ");
scanf ("%d", &x);
printf ("Digite um valor para y: ");
scanf ("%d", &y);
x = x - 10;
w = y + pow(x,2);

w = (sqrt(x/y))*((x+y)/2);

x = pow(x,3) + (x-y);

printf ("x é igual a: %d", x);
printf ("y é igual a: %d", y);

getchar();
}
