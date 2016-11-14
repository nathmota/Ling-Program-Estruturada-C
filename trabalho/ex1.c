#include <stdio.h>
#include <stdlib.h>

const int MESES[12] = {31, 28, 31, 30, 31, 31, 30, 31, 30, 31, 30, 31};

int dias_ate_mes(int mes){
	int soma_dias = 0;

	if (mes > 1){
		for(int i = 0; i <= (mes-2); i++){
			soma_dias += MESES[i];
		}
	}
	return soma_dias;
}

int main(void) {
	int mes;

	printf("Digite o mês: ");
	scanf("%d",&mes);
	printf("Existem %d dias até o mês %d\n", dias_ate_mes(mes),mes);
	getchar();
	getchar();
	return 0;
}
