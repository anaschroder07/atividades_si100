#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main(){
    int lin, col, l, c, sim=0, nao=0;
    int** mat;
    int** trans; 

    scanf("%d %d", &l, &c);

    mat = (int**)malloc(l*sizeof(int*));
    for (lin=0; lin<l; lin++) {
    mat[lin] = (int*) malloc(c*sizeof(int));
    }

    trans = (int**)malloc(l*sizeof(int*));
    for (lin=0; lin<l; lin++) {
    trans[lin] = (int*) malloc(c*sizeof(int));
    }

    for(lin=0; lin<l; lin++){
        for(col=0; col<c; col++){
            scanf("%d", &mat[lin][col]);
        }
    }

    if (l == c) {
        for (lin = 0; lin < l; lin++){
            for (col = 0; col < c; col++){
                trans[col][lin] = mat[lin][col];
            }
        }        
        
       for (lin = 0; lin < l; lin++){
            for (col = 0; col < c; col++){
                if (mat[lin][col] == trans[lin][col]){
                    sim++;
                }
                else{
                    nao++;
                }
            }
        }

        if (sim == (l*c)){
            printf("Eh simetrica\n");
        }
        else {
            printf("Nao eh simetrica\n");
        }

    }
    else {
        printf("Nao eh simetrica\n");
    }


    return 0;
}