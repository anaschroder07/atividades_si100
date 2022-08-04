#include <stdio.h>

int main() {
    int n;
    int s;
    int x;
    long resposta_n;
    long resposta_s;
    long resposta;
    long conta;
    
    scanf("%d", &n);
    scanf("%d", &s);
    x = n - s;
    
    resposta_n = 1;
    while(n > 1) {
        resposta_n *= n--;        
    }
    
    resposta_s = 1;
    while(s > 1) {
        resposta_s *= s--;
    }
     
    resposta = 1;
    while(x > 1) {
        resposta *= x--;
    }
          
    conta = resposta_n/(resposta_s * resposta);    
    printf ("%ld\n", conta);
    
   return 0;
} 