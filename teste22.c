#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
 int main (){
     int func[4];
     int contf = 0;
     int respostacad;
                            do{
                            printf("Bem vindo ao cadastro de usuario\n");
                            printf("Digite os numeros da matricula\n");
                            scanf("%d", &func[contf]);  // usando vetor eu consigo variar a posição com um loop usando a variavel
                            printf("Numero da matricula %d \n" , func[contf]);
                            contf++;
                            printf("Deseja cadastrar mais algum?");
                            scanf ("%d", &respostacad);

                           } while (respostacad==1);

                                printf("fim");


}
