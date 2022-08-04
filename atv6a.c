#include <stdio.h>
#define NUM_LIN 20
#define NUM_COL 20
int main()
{
    int m[NUM_LIN][NUM_COL];
    int nlin, ncol, lin, col, lint, colt;

    scanf("%d %d", &nlin, &ncol);

    for (lin = 0; lin < nlin; lin++)
        for (col = 0; col < ncol; col++)
            scanf("%d", &m[lin][col]);
            //trans[col][lin] = m[lin][col];

    for (lint = 0; lint < ncol; lint++){
        for (colt = 0; colt < nlin; colt++){
            printf("%d ", m[colt][lint]);
        }
        printf("\n");
    }
            
    return 0;
}