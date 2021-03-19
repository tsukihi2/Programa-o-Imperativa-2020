#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main ()
{


    int func[5]= {30,25,20,15,320};
    int rcont2=0;
    int rcount=0;
    int n;
int cmpfunc (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
 qsort(func, 5, sizeof(int),cmpfunc);
   for( n = 0 ; n < 5; n++ )
  printf("%d", func[n]);
}
}
