#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//#define NUMFUNC 5 // definindo tamanho maximo de funcionarios
//#define TAMANOME 50 // definindo tamanho maximo de letras no nome.
    int main()
    {
        //char matriznome[NUMFUNC][TAMANOME];
        char nome[50];

        printf("Digite o nome do funcionario");
        scanf("%[^\n]%*c", &nome); // lendo todos os valores até que haja uma quebra de linha e depois passando pro vetor de caracteres com os nome.
        printf ("Nome Completo: %s", nome);



      //  int matrizhoras[4][5];
      //  for(int semana=0 ; semana <4 ; semana++){
         //   printf("Semana %d\n", semana+1 );
        //    for (int dia=0; dia <5; dia++);
         //   printf ("Dia %d/n", dia+1);

           //     printf("Horas do dia %d da semana %d", y, x);
           //     scanf ("%d",&matrizhoras[dias][semana])

        }
