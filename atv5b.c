#include<stdio.h>
int main () {
    int i, vetor_quant[10], total=0;
    float x, vetor_valor[10], lucro=0;

    
    for (i=0; i < 10; i++) {
        scanf("%d", &vetor_quant[i]);
        total += vetor_quant[i];
        }

    for (i=0; i < 10; i++) {
        scanf("%f", &vetor_valor[i]);
        }
    
    for (i=0; i < 10; i++) {
        x = vetor_quant[i] * vetor_valor[i];
        lucro += x;
    }
    
    printf("O lucro foi de %.3f e a quantidade de produtos vendidos foi de %d\n", lucro, total);
    
    return 0;
}