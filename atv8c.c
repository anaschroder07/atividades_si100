#include<stdio.h>
#include<math.h>
int main () {

    float imc;
    struct corpo {
        float altura, peso;
        char nome[50];
    } pessoa;

    scanf("%f", &pessoa.altura);
    scanf ("%f", &pessoa.peso);
    scanf ("%s", pessoa.nome);

    imc = (pessoa.peso / (pow(pessoa.altura, 2)));

    printf ("%.3f\n", imc);

    return 0;
}