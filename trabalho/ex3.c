#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const int TRUE = 1;
const int FALSE = 0;

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

const char ABREV_MESES[12][4] = {
	"Jan",
	"Fev",
	"Mar",
	"Abr",
	"Mai",
	"Jun",
	"Jul",
	"Ago",
	"Set",
	"Out",
	"Nov",
	"Dez"
};

const int DIA_MESES[12] = {31, 28, 31, 30, 31, 31, 30, 31, 30, 31, 30, 31};

struct mes {
	int dias;
	int n_mes;
	char nome_mes[10];
	char abrev_mes[4];
};

struct mes MESES[12];

int inicializa_meses(){
	struct mes md;
	for(int i = 0; i <= (12 - 1); i++){
		md.dias = DIA_MESES[i];
		md.n_mes = i + 1;
		strcpy(md.nome_mes,NOME_MESES[i]);
		strcpy(md.abrev_mes,ABREV_MESES[i]);
		MESES[i] = md;
	}
}

int checa_bissexto(int ano){
    if (((ano % 4 == 0) && (ano % 100 != 0)) || (ano % 400 == 0)) 
	return TRUE;
    else
	return FALSE;
}

int dias_ate(int d, char m[10], int a){
	int soma_dias = 0;
	int i = 0;

	if ((strcmp(m,"Janeiro") != 0) || (strcmp(m,"Jan") != 0) || (atoi(m) != 1)){
		while((strcmp(MESES[i].nome_mes,m) != 0) && (strcmp(MESES[i].abrev_mes,m) != 0) && (atoi(m) != MESES[i].n_mes)){
			soma_dias += DIA_MESES[i];
			i++;
			
		}
	}
	//A partir de Março, se for ano bissexto, conta um dia a mais
	if ((i>=2) && (checa_bissexto(a)))
		soma_dias++;
	return soma_dias+(d-1);
}


int main(void) {
	int d;
	char m[10];
	int a;

	inicializa_meses();
	
	printf("Digite o dia: ");
	scanf("%d",&d);
	printf("Digite o mês: ");
	scanf("%s",m);
	printf("Digite o ano: ");
	scanf("%d",&a);
	printf("Existem %d dias até o dia %d-%s-%d\n", dias_ate(d,m,a),d,m,a);
	getchar();
	getchar();
	return 0;
}
