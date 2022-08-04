#include<stdio.h>
#include<math.h>
int main () {
    
    struct Ponto {
        int x, y;
    };

    typedef struct Retangulo { 
        struct Ponto inf_esq;
        struct Ponto sup_dir; 
    } ret;

    ret a;
    ret b;

    scanf ("%d %d", &a.inf_esq.x, &a.inf_esq.y);
    scanf ("%d %d", &a.sup_dir.x, &a.sup_dir.y);
    scanf ("%d %d", &b.inf_esq.x, &b.inf_esq.y);
    scanf ("%d %d", &b.sup_dir.x, &b.sup_dir.y);

    if(b.inf_esq.x >= a.inf_esq.x && b.inf_esq.y >= a.inf_esq.y && b.inf_esq.x <= a.sup_dir.x && b.inf_esq.y <= a.sup_dir.y &&
   b.sup_dir.x <= a.sup_dir.x && b.sup_dir.y <= a.sup_dir.y && b.sup_dir.x >= a.inf_esq.x && b.sup_dir.y >= a.inf_esq.y) {
        printf("o segundo retangulo esta contido no primeiro\n");
    }
    else {
        printf("o segundo retangulo nao esta contido no primeiro\n");
    }

    return 0;
}