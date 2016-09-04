#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>

main () {
	int op;
	float raio,area,per;

printf ("Digite a operação escolhida: ");
printf (" 1 para área");
printf (" 2 para perímetro");
scanf ("%d", op);
printd ("Informe o raio da circunferência: ");
scanf ("%f", &raio);

if (op) = 1 {
	area = (3,14* pow(raio,2));
	printf ("A área da circunferência é %f", area);
}
if (op) = 2 {
	per = (2* 3,14 * (raio));
	printf ("O perímetro da circunferência é: %f", per);
}
else {
	printf ("O indicador de operação não foi fornecido corretamente. ");
}
