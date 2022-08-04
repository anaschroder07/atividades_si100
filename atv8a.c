#include<stdio.h>
#include<math.h>
int main (){
    float a, dist;
    struct Ponto {
        float x, y;     
    } p1, p2;

    scanf ("%f %f", &p1.x, &p1.y);
    scanf ("%f %f", &p2.x, &p2.y);

    a = ( pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
    
    dist = sqrt(a);

    if (dist >= 0.0000001){
        printf ("os pontos nao sao iguais\n");
    }
    else {
        printf("os pontos sao iguais\n");
    }

    return 0;
}