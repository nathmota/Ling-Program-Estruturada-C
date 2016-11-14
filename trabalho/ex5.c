#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct dieta {
	char nome[40];
	float preco;
	int calorias;
};

void ler_dieta(struct dieta * d){
	for(int i = 0; i <= (5 - 1); i++){
		printf("*******************\n");
		printf("Digite o nome da comida: ");
		scanf("%s",d[i].nome);
		printf("Digite o preço: ");
		scanf("%f",&d[i].preco);
		printf("Digite o numero de calorias: ");
		scanf("%d",&d[i].calorias);
	}
}

void listar_dieta(struct dieta * d){
	for(int i = 0; i <= (5 - 1); i++){
		printf("*******************\n");
		printf("Nome da comida: %s\n",d[i].nome);
		printf("Preço: %.1f\n",d[i].preco);
		printf("Calorias: %d\n",d[i].calorias);
	}
}

int main(void) {
	struct dieta dieta[5];
	
	ler_dieta(dieta);	
	listar_dieta(dieta);	
	getchar();
	getchar();
	return 0;
}
