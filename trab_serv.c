#include <stdio.h>
#include<math.h>
#define N 10
int main() {

    int m1[N][N], m2[N][N], m3[N][N], m4[N][N];
    int l, c, lin, col, num, nlin, ncol, fator;
    float soma, media, desvio, x, y;

    scanf("%d", &num); /* num < 10*/
    nlin = num;
    ncol = num;

    scanf("%d", &fator); // leitura do fator de correção

    // leitura da matriz original
    for (l=0; l < nlin; l++){ 
        for (c=0; c < ncol; c++) 
            scanf("%d",&m1[l][c]);
    }

    // leitura das posições
    for (lin=0; lin < nlin; lin++) { 
        for (col=0; col < ncol; col++) 
            scanf("%d",&m2[lin][col]);
    }

    // multiplicação pelo fator
    for (l=0; l < nlin; l++) {
        for (c=0; c < ncol; c++) 
            m1[l][c] = m1[l][c] * fator;
    }

    // arrumando as posições
    for (lin = 0; lin < ncol; lin++){
        for (col = 0; col < nlin; col++)
            m3[lin][col] = m1[col][m2[lin][col]];
    }

    // transposição
    for (lin = 0; lin < ncol; lin++){
        for (col = 0; col < nlin; col++) 
            m4[lin][col] = m3[col][lin];
    }


    printf("Matriz corrigida\n");    
    for (lin=0; lin < nlin; lin++){ 
        for (col=0; col < ncol; col++){ 
            printf("%d \t", m4[lin][col]);
        }
        printf("\n");
    }

    // cálculo e apresentação das somas
    printf("Somas::");
    for (col=0; col < ncol; col++){
        soma = 0;                   //zerando o valor
        for (lin=0; lin < nlin; lin++){
            soma = soma + m4[lin][col]; }
        printf ("%.2f\t", soma);
    }
    printf("\n");

    // cálculo e apresentação das médias
    printf("Medias::");
    for (col=0; col < ncol; col++){ 
        soma = 0;                   //zerando valores
        media =0;
        for (lin=0; lin < nlin; lin++){ 
            soma = soma + m4[lin][col]; }
        media = soma/num;
        printf ("%.2f\t", media);
    }
    printf("\n");

    // cálculo e apresentação dos desvios
    printf("Desvios::");
    for (col=0; col < ncol; col++){
        soma = 0;
        media = 0;                  
        desvio = 0;                 // zerando valores
        x = 0;
        y = 0;
        for (lin=0; lin < nlin; lin++){ 
            soma = soma + m4[lin][col]; }    
        media = soma/num;                           // refazendo a media
        for (lin=0; lin < nlin; lin++){
        x = pow(((m4[lin][col]) - media), 2);       // subtraindo cada valor pela média e elevando ao quadrado
        y += x; }                                   // somatório
        desvio = (sqrt(y/num));
        printf ("%.2f\t", desvio);
    }

return 0; 
}