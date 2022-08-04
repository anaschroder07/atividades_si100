#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main(){
    int i, a, grau;
    float *v;
    float x, b=0, resp = 0;

    scanf("%d", &grau);
    a = grau + 1;

    v = (float *)malloc(a * sizeof(float));

    for (i = 0; i < a; i++){
        scanf("%f", &v[i]);
    }

    scanf("%f", &x);

    for (i = 0; i < a; i++)  {
        b = v[grau] * pow(x, grau);
        resp = resp + b;
        grau--;
    }

    printf("%.2f\n", resp);

    return 0;
}
