#include <stdio.h>
#include <stdlib.h>
#include <string.h>

    struct Notas
    {
        char nome[101];
        int ra;
        float notasp1;
        float notasp2;
    };

int main (){
    int i, x;    

    scanf("%d", &x);

    struct Notas* alunos = (struct Notas*)malloc(x * sizeof(struct Notas));
    //alunos é o vetor pq ja multipliquei por x o tamanho;

    for ( i=0; i<x; i++) {
        getchar();
        fgets(alunos[i].nome, 101, stdin);
        alunos[i].nome[strcspn(alunos[i].nome, "\n")] = 0;
        scanf("%d", &alunos[i].ra);
        scanf("%f", &alunos[i].notasp1);
        scanf("%f", &alunos[i].notasp2);
    }
    
    for ( i=0; i<x; i++){        
       printf("%d\t%s\t%.2f\n",  alunos[i].ra, alunos[i].nome, (alunos[i].notasp1+alunos[i].notasp2)/2);
    }

    return 0;
    
}