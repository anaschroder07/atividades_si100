#include <stdio.h>
#include <string.h>
int main(){
    char palavra[101], contrario[101];
    int i, x=0;
        scanf("%s", palavra);
        
        for (i=strlen(palavra)-1; i >= 0; i--){
           if (palavra[i]>='A' && palavra[i]<='Z') {
               palavra[i] = ((palavra[i]- 'A')+ 'a');
           }           
           contrario[x] = palavra[i];
           x++;           
        }
       
        contrario[x]='\0';

        if (strcmp(palavra, contrario) == 0){
            printf("Esta palavra e um palindromo\n");
           }
        else {
            printf("Esta palavra nao e um palindromo\n");
        }       

    return 0;
}