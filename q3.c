#include <stdio.h>

#define QTD_PRODUTOS 500

typedef struct {
   float preco;
   int vendas;
} produto;

int main() {
   produto produtos[QTD_PRODUTOS];
   float valorArrecadadoTotal = 0.0f;
   for(int i = 0; i < QTD_PRODUTOS; i++) {
      printf("Informe o preco do produto seguido pela sua quantidade de vendas:\n");
      scanf("%f %d", &produtos[i].preco, &produtos[i].vendas);
      float arrecadado = produtos[i].preco * produtos[i].vendas;
      valorArrecadadoTotal += arrecadado;
      
      printf("Valor arrecadado para esse produto: %.2f\n", arrecadado);
      printf("\n");
   }
   printf("\n");
   
   printf("Valor total arrecadado: %.2f\n", valorArrecadadoTotal);
   return 0;
}
