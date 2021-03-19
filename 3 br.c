#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int convidados,controle;
    int extras =0;
    int cont = 0;
    int totalnafesta = 0;
    int pessoas;

    scanf("%d", &controle);
    while (controle >= 0)
    {
    convidados = controle;

        if(convidados <= 25)
            {
            extras = extras + convidados;
            }
        else
            {
            extras = extras + 25;
            }
    scanf("%d", &controle);
    controle = 15 - controle
    cont++;
            if (convidados > 15)

    }
    totalnafesta = extras + cont;
    pessoas = extras - convidados;
    //printf ("numero de conv foi %d", extras); // resposta
    //printf ("numero de conv foi %d", convidados); // ultimo numero digitado

	return 0;
}
