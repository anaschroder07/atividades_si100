#include<stdio.h>
#include<math.h>

float media (float n1, float n2, char opcao);

int main(){
    char opcao;
    float n1, n2;
    scanf ("%c", &opcao);
    scanf ("%f %f", &n1, &n2);

    printf ("%.3f\n", media(n1, n2, opcao));

    return 0;
}

float media (float n1, float n2, char opcao) {
    float x;
    if (opcao == 'A') {
        return ((n1 + n2) / 2);
    }
    else {
        x = n1*n2;
        return sqrt(x);
    }
}