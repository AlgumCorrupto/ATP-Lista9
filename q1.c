#include <stdio.h>
#include <math.h>

typedef struct {
   float x;
   float y;
} ponto;

int main() {
   ponto a, b;
   float distancia;

   printf("informe as coordenadas X Y do ponto A.\n");
   scanf("%f %f", &a.x, &a.y);

   printf("informe as coordenadas X Y do ponto B.\n");
   scanf("%f %f", &b.x, &b.y);

   distancia = sqrt(pow(b.x - a.x, 2) + pow(b.y - b.x, 2));
   printf("distancia entre o ponto A e B: %.2fu\n", distancia);

   return 0;
}
