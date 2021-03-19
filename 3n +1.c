#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n;
    int cont = 0;
    scanf ("%d", &n);
    while (n != 1){
        if (n % 2 == 0)
        n = n / 2;
        else
        n = 3*n + 1;
    cont++;}
    printf ("o numero de vezes foi \n%d", cont);
    return 0;


}
