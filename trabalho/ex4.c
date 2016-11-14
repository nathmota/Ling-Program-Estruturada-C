#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct restaurante {
	char nome[40];
	char endereco[100];
	float preco_medio;
	char tipo_comida[30];
};

void ler_restaurantes(struct restaurante * r){
	for(int i = 0; i <= (5 - 1); i++){
		printf("*******************\n");
		printf("Digite o nome do restaurante: ");
		scanf("%s",r[i].nome);
		printf("Digite o endereço: ");
		scanf("%s",r[i].endereco);
		printf("Digite o preço medio: ");
		scanf("%f",&r[i].preco_medio);
		printf("Digite o tipo de comida: ");
		scanf("%s",r[i].tipo_comida);
	}
}

void listar_restaurantes(struct restaurante * r){
	for(int i = 0; i <= (5 - 1); i++){
		printf("*******************\n");
		printf("Nome do restaurante: %s\n",r[i].nome);
		printf("Endereço: %s\n", r[i].endereco);
		printf("Preço medio: %.1f\n",r[i].preco_medio);
		printf("Tipo de comida: %s\n",r[i].tipo_comida);
	}
}

int main(void) {
	struct restaurante restaurantes[5];
	
	ler_restaurantes(restaurantes);	
	listar_restaurantes(restaurantes);	
	getchar();
	getchar();
	return 0;
}
