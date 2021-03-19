#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n, pontos=0,pontosmax=0;
    scanf ("%d", &n);
    //printf ("%d", n);
    int nANT = 0;

    for (int i =1; i <= n; i++)
        {
        int nATUAL;
        scanf ("%d", &nATUAL);
        if(i==1) nANT = nATUAL;
            if (nATUAL==nANT)
            pontos++;
            else
            {
            if(pontos > pontosmax) pontosmax = pontos;

            nANT= nATUAL;
            pontos = 1 ;
            }
        //printf ("%d", nATUAL);

        }
    if(pontos > pontosmax) pontosmax = pontos;
    printf ("%d \n", pontosmax);

	return 0;
}
