#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const char NOME_MESES[12][10] = {
	"Janeiro",
	"Fevereiro",
	"Março",
	"Abril",
	"Maio",
	"Junho",
	"Julho",
	"Agosto",
	"Setembro",
	"Outubro",
	"Novembro",
	"Dezembro"
};

const int DIA_MESES[12] = {31, 28, 31, 30, 31, 31, 30, 31, 30, 31, 30, 31};

struct mes_dia {
	int dias;
	char nome[10];
};

struct mes_dia MESES[12];

int inicializa_meses(){
	struct mes_dia md;
	for(int i = 0; i <= (12 - 1); i++){
		md.dias = DIA_MESES[i];
		strcpy(md.nome,NOME_MESES[i]);
		MESES[i] = md;
	}
}

int dias_ate_mes(char mes[10]){
	int soma_dias = 0;
	int i = 0;

	if (strcmp(mes,"Janeiro") != 0){
		while(strcmp(MESES[i].nome,mes) != 0){
			soma_dias += DIA_MESES[i];
			i++;
		}
	}
	return soma_dias;
}

int main(void) {
	char mes[10];

	inicializa_meses();
	
	printf("Digite o mês: ");
	scanf("%s",mes);
	printf("Existem %d dias até o mês %s\n", dias_ate_mes(mes),mes);
	getchar();
	getchar();
	return 0;
}
