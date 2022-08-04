#include<stdio.h>
#define N 20

void Vetor (int *a, int tam, int *mai, int *men) {
    int i, j, temp;
    for (j=tam - 1; j > 0; j--) {
        for (i=0; i < j; i++){
            if (a[i] > a[i+1]) {
                temp = a[i];
                a[i] = a[i+1];
                a[i+1] = temp;
            }
        }
    }

    *mai = a[tam - 1];
    *men = a[0];
}

int main(){
    int a[N], mai, men;
    int i, num;

    scanf ("%d", &num);
    for (i=0; i < num; i++) {
        scanf("%d", &a[i]);
    }
    Vetor (a, num , &mai, &men);
    printf ("maior valor: %d\n", mai);
    printf ("menor valor: %d\n", men);

    return 0;
}