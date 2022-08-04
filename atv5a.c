#include <stdio.h>
int main() {
    float x, notas[20];
    int i;
    
 
        for (i=0; i < 20; i++) {
        scanf("%f", &notas[i]);
        }

        while (1) {
            scanf("%f", &x);
            if (x < 0) {
                break;
            }
            i=0;
            while ((notas[i]!=x) && (i<20)) {
                    i++;
                }
            if (i<20  && x>0.0) {
                printf("existe\n");
            }
            else {
                printf("nao existe\n");
            }
                
        }
        
    
return 0;
}