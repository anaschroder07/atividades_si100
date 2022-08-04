#include<stdio.h>
#include<math.h>

float soma (float x, float y);
float subtracao (float x, float y);
float multiplicacao (float x, float y);
float divisao (float x, float y);
float potencia (float x, float y);

int main(){
    float x, y;
    char op;
    scanf ("%f%c%f", &x, &op, &y);
    
    if (op == '+') {
        printf ("%.3f\n", soma(x,y));
    }
    else if (op == '-') {
        printf ("%.3f\n", subtracao(x,y));
    } 
    else if (op == '*') {
        printf ("%.3f\n", multiplicacao(x,y));
    }
    else if (op == '/') {
        printf ("%.3f\n", divisao(x,y));
    }
    else if (op == '^') {
        printf ("%.3f\n", potencia(x,y));
    }
    
    return 0;
}

float soma (float x, float y) {
    return x + y;
}
float subtracao (float x, float y) {
    return x - y;
}
float multiplicacao (float x, float y) {
    return x * y;
}
float divisao (float x, float y) {
    return x / y;
}
float potencia (float x, float y) {
    return (pow(x, y));
}