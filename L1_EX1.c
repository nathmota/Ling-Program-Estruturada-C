#include <stdio.h>

main () {
	int x,k;
	
printf ("Digite um número: ");
scanf ("%d", &x);



if (x > 0 && x <= 10) {
	k = 1;
}
else {
	k= 0;
}
printf ("%d", &k);

getchar();

}
