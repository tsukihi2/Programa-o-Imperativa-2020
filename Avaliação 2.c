#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//-----------------------------------------------------------------------------------------------------------------------
// variaveis
        int escolhamenu;
        int contf =0;
        int demitidoscont=0;
        typedef struct fichafunc{
        char nome[50];
        int matricula;
        int horastrab;
        }Sfunc;

        Sfunc func[4]; // Criando uma struct vc consegue criar um grupo de variaveis que pertencem ao mesmo individuo. apartir disso vc cria um vetor que vai conter todos esses grupos.
        Sfunc demitidos[4];





//---------------------------------------------------------------------------------------------------------------------------
// funções

void menu_funcoes() // função para chamar o menu
{

            printf("|===============================================================|\n");
            printf("|====================| Menu de funcionalidades |================|\n");
            printf("|                           Funcoes                             |\n");
            printf("| 1) Cadastro de usuarios                                       |\n"); // Lista de opções
            printf("| 2) Remover funcionario                                        |\n");
            printf("| 3) Atualizar dados de um funcionario                          |\n");
            printf("| 4) Listar funcionarios                                        |\n");
            printf("| 5) Listar funcionarios ADIMPLENTES                            |\n");
            printf("| 6) Listar funcionarios INADIMPLENTES                          |\n");
            printf("| 7) Listar e remover funcionarios que deverao ser DEMITIDOS    |\n");
            printf("| 8) Para sair do programa                                      |\n");
}

void cadastro()
{
        int respostacad; // variavel auxiliar da função
        do
                {
                   if (contf >4) //para limitar o numero de funcionarios
                   printf("Numero maximo de funcionarios atingido\n");

                   else
                   {
                    printf("\nBem vindo ao cadastro de usuario\n"); // interface
                    printf("Digite o nome do funcionario\n");
                    scanf("%[^\n]%*c", &func[contf].nome); // lendo todos os valores até que haja uma quebra de linha e depois passando pra struct do funcionario
                    //printf ("Nome Completo: %s\n", &func[contf].nome); confirmação do nome
                    printf("Digite os numeros da matricula\n"); // interface
                    scanf("%d", &func[contf].matricula);  // usando um vetor de uma struct.
                    //printf("Numero da matricula %d \n" , func[contf].matricula); // printf so pra confirmar
                        if (func[contf-1].matricula==func[contf].matricula || func[contf].matricula==demitidos[contf].matricula) // essa linha daqui é pra certificar q não vai ter matriculas iguais nem entre os ja demitidos
                        printf("\nmatricula ja cadastrada digite um valor diferente para prosseguir\n");
                        else
                        {
                        contf++; // aumentar o contador do vetor q começou no 0 agora vai aumentar a posição de acordo com o numero de funcionarios
                        // printf ("%d", contf); // mostrar o valor do contador pra ver se ta funcionando
                        FILE *arq = fopen("C:\\Prog\\Arquivo.txt", "a"); // criando arquivo e salvando no local
                        fwrite(&func[contf], sizeof(Sfunc), 1, arq ); // salvando no arquivo.
                        // printf ("Gravou no arquivo"); // confirmação de q foi salvo
                        fclose(arq); // fechando o arquivo.};

                        printf("\ndigite 1 se quiser cadastrar mais algum\n"); // prompt pra continuar no loop
                        scanf ("%d", &respostacad);
                        }
                }
                    //printf("%d", respostacad); // confirmacao da resposta
        }while (respostacad==1); // basicamente pra se manter no loop a resposta tem q ser 1
                        //printf ("fim do menu A");
    }

void remover()
{
            int rmatric,rcount=0; // variaveis auxiliares pra o menu de remover
            int respostarem;
            int rcount2=0;
            int demitidoscont=0;

                printf ("\nDigite o numero da matricula q deseja remover\n"); // prompt pro usuario
                scanf ("%d",&rmatric); // scan do valor

                    for (rcount=0; rcount<=4; rcount++) // limitando para o numero maximo de funcionarios
                    {
                        if (rmatric==func[rcount].matricula) // se o numero digitador for igual ao numero do funcionario q esta na posição do contador
                        {
                        printf("Matricula encontrada digite 1 para remove-la\n");
                        scanf("%d",&respostarem);
                            if (respostarem != 1) // se a resposta for qualquer coisa alem de 1 o usuario volta pro menu inicial
                            escolhamenu=2;
                            else // se a resposta for 1
                            {
                            demitidos[demitidoscont].matricula=func[rcount].matricula; // o numero q estava na posição encontrada vai para demitidos para q nunca se repita
                            func[rcount].matricula=0; // zerando o numero pra abrir o espaço
                            contf--; // o contador de funcionarios totais reduz pra abrir vaga pra um novo no cadastro
                            demitidoscont++; // o contador do vetor de demitidos aumenta
                            printf("Matricula removida\n");
                                 printf("\n");
                            }
                        }
                        else // se nao for igual
                        rcount2 ++; // o contador auxiliar incrementa
                    }
                        if (rcount2>=5)//contadorauxiliar chegou no numero de funcionarios maximo
                        printf("\nMatricula nao encontrada\n");

}
void atualizarfunc()
{
                int hmatric=0;

                printf ("\nDigite o numero da matricula que desejas atualizar\n"); // prompt pro usuario
                scanf ("%d",&hmatric); // scan do valor
                for (int horacont=0;horacont<=4;horacont++) // loop for pra encontrar a matricula
                {
                 if (hmatric==func[horacont].matricula) // matricula encontrada nesse ponto em que hmatric = func[horacont]
                 {
                    printf("Digite as horas trabalhadas pelo trabalhador %d\n",func[horacont].matricula); // prompt pro usuario
                    scanf("%d",&func[horacont].horastrab); // valor das horas cadastrada em outro vetor porem na mesma posição q o trabalhador
                    FILE *arq = fopen("C:\\Prog\\Arquivo.txt", "a"); // criando arquivo
                        fwrite(&func[horacont].horastrab, sizeof(Sfunc), 1, arq ); // salvando no arquivo.
                        // printf ("Gravou no arquivo"); // confirmação de q foi salvo
                        fclose(arq);
                    printf("Horas cadastradas\n");
                         printf("\n");
                 }
                }

}

void relatoriofunc()
{

                for (int listacont=0;listacont<=4;listacont++) // loop pra varias as posições do vetor
                {
                 printf("Nome: %s\n", func[listacont].nome);
                 printf("Matricula: %d\n", func[listacont].matricula);
                 printf("Horas trabalhadas: %d\n",func[listacont].horastrab);
                 printf("____________________________________________________________");
                }
            printf("\n");

}

void relatorioadimp()
{
            int adcont=0; // criando um contador que so existe nessa função pra salvar memoria

                for (adcont=0;adcont<=4;adcont++) // loop pra varias as posições do vetor
                {
                    if (func[adcont].horastrab>=10); // para separar só as posições que satisfazem a opção das horas
                    printf("Funcionario de Nome %s  e matricula %d  esta adimplente\n ",func[adcont].nome, func[adcont].matricula);

                }
            printf("\n");

}
void relatorioinad()
{
            int inadcont=0; // criando um contador que so existe nessa função pra salvar memoria
                for (inadcont=0;inadcont<=4;inadcont++) // loop pra varias as posições do vetor
                {
                    if (func[inadcont].horastrab<10 && func[inadcont].horastrab>=7); // para separar só as posições que satisfazem a opção das horas
                    printf("Funcionario de Nome %s e  matricula %d esta inadimplentes\n",func[inadcont].nome), func[inadcont].matricula;
                }

            printf("\n");
}
void relatoriodemi()
{

                for (int rdemitidoscont=0;rdemitidoscont<=4;rdemitidoscont++)
                {
                    if (func[rdemitidoscont].horastrab<7); // para separar só as posições que satisfazem a opção das horas
                    printf("Funcionario de nome %s e matricula %d, sera demitido\n",func[rdemitidoscont].nome, func[rdemitidoscont].matricula);
                    demitidos[rdemitidoscont].matricula=func[rdemitidoscont].matricula; // o numero q estava na posição encontrada vai para demitidos para q nunca se repita
                    func[rdemitidoscont].matricula=0; // zerando o numero pra abrir o espaço
                    contf--; // o contador de funcionarios totais reduz pra abrir vaga pra um novo no cadastro
                    demitidoscont++; // o contador do vetor de demitidos aumenta
                    printf("Matricula removida\n");
                }


                    printf("\n");
}
// FUNÇÃO PRINCIPAL
int main()
{
    do
    {
        menu_funcoes();
        printf("\n==> ");
        scanf ("%d",&escolhamenu);

   switch(escolhamenu)
   {
    case 1:
       cadastro();
       break;
    case 2:
       remover();
       break;
    case 3:
        atualizarfunc();
        break;
    case 4:
        relatoriofunc();
        break;
    case 5:
        relatorioadimp();
        break;
    case 6:
        relatorioinad();
        break;
    case 7:
        relatoriodemi();
    case 8:
        break;
    default:
        printf ("Opcao invalida");
    }
    }while(escolhamenu>8);

    return(0);
}

