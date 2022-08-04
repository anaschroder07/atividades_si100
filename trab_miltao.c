#include<stdio.h>
#include<string.h>
#define N 101

int main (){

    int i=0, j=0, num_per, resposta_in, resposta_flo, errou = 0;
    char tip[10];
    char in[] = "INT", fl[] = "FLOAT", fim[] = "FIM";

    struct tipo_pergunta {
        int inteira, flutuante;
    };
    struct tipo_inteira {
        char pergunta_int[101];
        int alt0, alt1, alt2, resp_in;
    };
    struct tipo_flutuante {
        char pergunta_flo[101];
        float alte0, alte1, alte2;
        int resp_flo;
    };
    typedef struct Perguntas {
        struct tipo_inteira inteira;
        struct tipo_flutuante flutuante;
        struct tipo_pergunta tipo;
    } Pergunta;

    Pergunta perguntas[N];      // criando vetor para perguntas;

    while(1) {                  //ler perguntas até digitar fim;
        char tipo[6], ch;
        scanf("%s", tipo);      //leitura do tipo da pergunta a ser salva;

        if(strcmp(tipo, fim) == 0){             
            break;                                 // se digitar fim o laço se encerra;
        }

        while ((ch = getchar()) != '\n'); 
        
        if (strcmp(tipo, in) == 0) {                // verifica se é int;
            fgets(perguntas[i].inteira.pergunta_int, 101, stdin);       //leitura da pergunta;
            fflush(stdin);
            perguntas[i].inteira.pergunta_int[strcspn(perguntas[i].inteira.pergunta_int, "\n")] = 0;
            scanf("%d %d %d %d", &perguntas[i].inteira.alt0, &perguntas[i].inteira.alt1, &perguntas[i].inteira.alt2, &perguntas[i].inteira.resp_in);    //leitura das alternativas e resposta;
            i++; // salva int em i;
        }
        else if (strcmp(tipo, fl) == 0){            // verifica se é float;
            fgets(perguntas[j].flutuante.pergunta_flo, 101, stdin);     //leitura da pergunta;
            fflush(stdin);
            perguntas[j].flutuante.pergunta_flo[strcspn(perguntas[j].flutuante.pergunta_flo, "\n")] = 0;
            scanf("%f %f %f %d", &perguntas[j].flutuante.alte0, &perguntas[j].flutuante.alte1, &perguntas[j].flutuante.alte2, &perguntas[j].flutuante.resp_flo);    //leitura das alternativas e resposta;
            j++; // salva float em j;
        }
        
        
    }

    printf("Prepare-se para o Show do Miltao!\n");

    while (1) {
        scanf("%s", tip);       // leitura do tipo da pergunta que o usuário quer responder;
        if (strcmp(tip, "FIM") == 0){     
            break;                          // se digitar fim o laço se encerra;
        }
        else {
            scanf("%d", &num_per);  // lê o número da pergunta;
            while(1) {
                if ((strcmp(tip, in) == 0) ){   //verifica se é int;
                    printf("Pergunta: %s\n", perguntas[num_per].inteira.pergunta_int);
                    printf("Alternativa 0: %d\n", perguntas[num_per].inteira.alt0);
                    printf("Alternativa 1: %d\n", perguntas[num_per].inteira.alt1);
                    printf("Alternativa 2: %d\n", perguntas[num_per].inteira.alt2);
                    scanf("%d", &resposta_in);
                    if (resposta_in == perguntas[num_per].inteira.resp_in) { //verifica se a resposta está certa;
                        printf("Parabens, voce acertou!\n");
                        break;          //sai do laço;
                    }
                    else{
                        printf("Resposta errada, voce perdeu!\n");
                        errou = 1;  // variavel para controlar o encerramento do programa caso erre;
                        break;          // sai do laço;
                    }
                }
                else if((strcmp(tip, fl) == 0) ){   //verifica se é float;
                    printf("Pergunta: %s\n", perguntas[num_per].flutuante.pergunta_flo);
                    printf("Alternativa 0: %.2f\n", perguntas[num_per].flutuante.alte0);
                    printf("Alternativa 1: %.2f\n", perguntas[num_per].flutuante.alte1);
                    printf("Alternativa 2: %.2f\n", perguntas[num_per].flutuante.alte2);
                    scanf("%d", &resposta_flo);
                    if (resposta_flo == perguntas[num_per].flutuante.resp_flo) {  //verifica se a resposta está certa;
                        printf("Parabens, voce acertou!\n");
                        break;      // sai do laço;
                    }
                    else{
                        printf("Resposta errada, voce perdeu!\n");
                        errou = 1;  // variavel para controlar o encerramento do programa caso erre;
                        break;          // sai do laço;
                    }
                }
            }
            if(errou == 1){
                break;      //encerra se errar;
            }
        }
    }
    return 0;
}