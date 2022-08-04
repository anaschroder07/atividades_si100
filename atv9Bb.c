#include<stdio.h>
#include<math.h>
#define N 10;

void Soma (int *soma1, int *soma2, int a, int b, int c, int d) {
    *soma1 = (a + c);
    *soma2 = (b + d);
}
void Multiplicacao (int *multiplicacao1, int *multiplicacao2, int a, int b, int c, int d) {
    *multiplicacao1 = (a*c) - (b*d);
    *multiplicacao2 = (a*d) + (b*c);
}
int main(){
    int a, b, c, d;
    int soma1, soma2, multiplicacao1, multiplicacao2;
    char op;
    scanf ("%d %d %c %d %d", &a, &b, &op, &c, &d);

    if (op == '+') {
        Soma (&soma1, &soma2, a, b, c, d);
        printf ("%d + %di\n", soma1, soma2);
    }
    else if (op == '*') {
        Multiplicacao (&multiplicacao1, &multiplicacao2, a, b, c, d);
        printf ("%d + %di\n", multiplicacao1, multiplicacao2);
    }
    
    return 0;
}
