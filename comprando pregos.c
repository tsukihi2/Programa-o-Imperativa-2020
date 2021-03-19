#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int pregos = 0 ;
    int totalpregos = 0;
    int sobrou;
    float valor,pregost;
    pregost= totalpregos;

    scanf("%d", &pregos);
    while (pregos % 2 == 0){

        totalpregos = pregos + totalpregos;

    scanf("%d", &pregos);
    }

    if (totalpregos <= 12)
    {
        sobrou = 12 -totalpregos;
        printf ("7.89\n%d",sobrou);
    }
    else
    {
            pregost= totalpregos;
            valor = (ceil(pregost/12))* 7.89;
            sobrou = 12 - ((totalpregos) % 12);

           printf ("%.2f\n%d", valor,sobrou);

    }

	return 0;
}
