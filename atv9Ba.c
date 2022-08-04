#include<stdio.h>
#include<math.h>
#define N 10;

void Cubo (int *b, int *a) {
    int i;
    for (i=0; i < 10; i++) {
        b[i] = (pow(a[i], 3));
    }
}

int main(){
    int a[10], b[10];
    int i;

    for (i=0; i < 10; i++) {
        scanf("%d", &a[i]);
    }
    Cubo (b, a);
    for (i=0; i < 10; i++) {        
        printf ("%d\n", b[i]);
    }

    return 0;
}