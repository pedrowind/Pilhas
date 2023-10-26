#include"stdio.h"
#include"PilhaEspecial.c"

int main(){

	pilhaPtr P = NULL;
	int opcao,sair,erro,tamanho = 0;
	char metodo[100];

	do {
        erro = 0;
        pilhaPtr topo = NULL;

        printf("******************\n");
        printf("* Digite o valor *\n");
        printf("******************\n");

        scanf("%s", &metodo);
        system("cls");

        tamanho = strlen(metodo);

        for (int i = 0; i < tamanho; i++) {
            if (metodo[i] == '[' || metodo[i] == '(' || metodo[i] == '{' ){
                push(&topo, metodo[i]);
                erro++;
            }

            else if (metodo[i] == ']' ){
                if(topo->metodo== '[' ){
                pop(&topo);
                erro--;
                }
                else {
                    erro++;
                }
            }
            else if (metodo[i] == ')' ){
                if(topo->metodo == '(' ){
                pop(&topo);
                erro--;
                }
                else {
                    erro++;
                }
            }
            else if (metodo[i] == '}' ){
                if(topo->metodo == '{' ){
                pop(&topo);
                erro--;
                }
                else {
                    erro++;
                }
            }
            printf("\n");

            for(int i2=0 ; i2 <= i; i2++){
            printf("%c",metodo[i2]);
            }

            imprimePilha(topo);

            system("pause");
            system("cls");
        }

            if (erro == 0) {
            printf("******************\n");
            printf("* Correto.       *\n");
            printf("******************\n");
            }

            else {
            printf("******************\n");
            printf("* Errado.        *\n");
            printf("******************\n");
            }

        printf("******************\n");
        printf("* 1- Continuar   *\n");
        printf("* 2- Encerrar    *\n");
        printf("******************\n");

        scanf("%d", &sair);

        if (sair == 1) {
            system("cls");
        }

    } while(sair != 2);

    return 0;
}
