#include<stdio.h>
int main (){
    int i, vetor_1[10], vetor_2[10];

    for (i=0; i < 10; i++) {
        scanf("%d", &vetor_1[i]);
        }

    for (i=0; i < 10; i++) {
        scanf("%d", &vetor_2[i]);
        }
    
    for (i=0; i < 10; i++) {
        printf("%d|%d|", vetor_1[i], vetor_2[i]);
    }
    
    printf ("\n");

    return 0;
}