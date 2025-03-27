#include <stdio.h>

#define QTD_PESSOAS 30

typedef struct {
   int idade;
   char nome[255];
} pessoa;

int main() {
   pessoa pessoas[QTD_PESSOAS];
   int sum = 0;
   for(int i = 0; i < QTD_PESSOAS; i++) {
      printf("Digite o nome da pessoa: ");
      scanf(" %s", &pessoas[i].nome);
      printf("Digite a idade dessa pessoa: ");
      scanf("%d", &pessoas[i].idade);
      printf("\n");
      sum += pessoas[i].idade;
   }
   int media = sum/QTD_PESSOAS;
   printf("Pessoas com idades acima da media:\n");
   
   for(int i = 0; i< QTD_PESSOAS; i++) {
      if(pessoas[i].idade>media) {
	 printf("%s\n", pessoas[i].nome);
      }
   }
   return 0;
}
