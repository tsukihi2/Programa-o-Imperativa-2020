#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()

{
  typedef struct fichafunc{
        char nome;
        int matric;
        }Func;
       struct fichafunc func[4]  = {"A",12};;




    FILE *arq = fopen("C:\\Prog\\Teste.txt", "a");
    fwrite(&unc, sizeof(sfunc), 1, arq ); // salvando no arquivo.
}
