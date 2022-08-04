#include <stdio.h>

int main() {
    int cont, linha, num_linhas, num0, num1, w=0, x, y, z=0;
    
    linha = 1;
    num0 = 0;
    num1 = 1;
        
    scanf("%d", &num_linhas);
    
        while (linha <= num_linhas){
            
                if (linha % 2 == 0){
                    cont = 0;
                    x = 0;
                    while (cont < linha){
                        printf("%d", num0);
                        cont++;
                        x++;
                    }
                    w = w + x;
                    printf("\n");
                }
            
                else {
                    cont = 0;
                    y = 0;
                    while (cont < linha){
                        printf("%d", num1);
                        cont++;
                        y++;
                    }
                    z = z + y;
                    printf("=%d\n", y);
                }
           
        linha++;
        
        }
    
        printf("%d\n", w + z);
            
    return 0;
}