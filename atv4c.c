#include <stdio.h>

int main() {
    int num;
    int x=1;
    int cont_par=0;
    int cont_impar=0;
    
    while (x <= 10) {
        scanf("%d", &num);
        if (num % 2 == 0) {
            cont_par++; }
        else {
            cont_impar++; }
        x++;
        
    }

    printf("%d pares, %d impares\n", cont_par, cont_impar);

    return 0;
}