#include <stdio.h>
#include <string.h>

#define QTD_PESSOAS 3

typedef struct {
   char sexo;
   char nome[255];
} pessoa;

int main() {
   pessoa pessoas[QTD_PESSOAS];

	for(int i = 0; i < QTD_PESSOAS; i++) {
		char sexo;
		char bufferNome[255];
		printf("[M/F]\n");
		printf("Qual o seu sexo? ");
		scanf(" %c", &sexo);
		printf("Digite seu nome: ");
		scanf(" %s", bufferNome);
      strcpy(pessoas[i].nome, bufferNome);
		switch(sexo) {
			case 'f':
			case 'F':
            pessoas[i].sexo = 'f';
				break;
			case 'm':
			case 'M':
            pessoas[i].sexo = 'm';
				break;
			default:
				printf("Sexo invalido!\n");
				i--;
				break;
		}
	}
	printf("\n");

	printf("Mulheres informadas: \n");
	for(int i = 0; i < QTD_PESSOAS; i++) {
      if(pessoas[i].sexo == 'f')
         printf("%s\n", pessoas[i].nome);
	}
	printf("\n");

	printf("Homens informados: \n");
	for(int i = 0; i < QTD_PESSOAS; i++) {
      if(pessoas[i].sexo == 'm')
         printf("%s\n", pessoas[i].nome);
	}
	printf("\n");

	return 0;
}
