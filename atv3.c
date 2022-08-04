#include<stdio.h>
int main() {
    float a;
    float b;
    char op;
    scanf ("%f%c%f", &a, &op, &b);
        if (op=='+') {
            printf("%.3f+%.3f=%.3f\n", a, b, a+b);
        }
        else if (op=='-') {
            printf("%.3f-%.3f=%.3f\n", a, b, a-b);
        }
        else if (op=='*') {
            printf("%.3f*%.3f=%.3f\n", a, b, a*b);
        }
        else if (op=='/') {
            printf("%.3f/%.3f=%.3f\n", a, b, a/b);
        }
        else {
            printf("Operador invalido\n");
        }
        return 0;
}