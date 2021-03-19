#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    scanf ("%d", &n);
    while (n != 0)
        {


        int cont = 0;
        int a,b;
        int sub =0;
        while (sub < n)
            {
              b=cont;
             a=cont+1;
            sub = a*a - b*b;

            cont++;
            }
    printf("%d - %d\n", a*a,b*b);
    scanf ("%d", &n);
        }
	return 0;
}
