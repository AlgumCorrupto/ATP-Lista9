#include <stdio.h>

#define QTD_DELEGACAO 2
#define QTD_ATLETA 2

typedef struct {
    char nome[255];
    int altura;
} atleta;

int main()
{
    atleta atletas[QTD_DELEGACAO][QTD_ATLETA];
    for(int i = 0; i < QTD_DELEGACAO; i++) {
        printf("Delegacao %d\n", i);
        for(int j = 0; j < QTD_ATLETA; j++) {
            printf("Informe o nome do atleta: ");
            scanf(" %s", atletas[i][j].nome);
            printf("Informe a altura do atleta: ");
            scanf("%d", &atletas[i][j].altura);
        }
        printf("\n");
    }
    
    for(int i = 0; i < QTD_DELEGACAO; i++) {
        int maiorAltura = 0x80000000;
        int maiorAtletaIdx = 0;
        for(int j = 0; j < QTD_ATLETA; j++) {
            if(atletas[i][j].altura > maiorAltura) {
                maiorAltura = atletas[i][j].altura;
                maiorAtletaIdx = j;
            }
        }
        printf("A maior altura da delegacao %d foi do atleta %s\n", i, atletas[i][maiorAtletaIdx].nome);
    }
    
    return 0;
}
