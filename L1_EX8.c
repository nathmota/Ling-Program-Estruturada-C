#include <stdio.h>
#include <math.h>

main () {
	int n1,n2,n3,menor;

printf ("Informe o primeiro número: ");
scanf ("%d", &n1);
printf ("Informe o segundo número: ");
scanf ("%d", &n2);
printf ("Informe o terceiro número: ");
scanf ("%d", &n3);

if (n1 < n2 || n1 < n3) {
	n1 = menor;
if (n2 < n1 || n1 < n3) {
	n2 = menor;
else {
	n3 = menor;
	}
printf ("O número menor é %d", menor);
}

