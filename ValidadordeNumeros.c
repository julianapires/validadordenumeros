#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale (LC_ALL, "");
    
    char escolha;
    
    printf ("\n\n\n***VALIDADOR DE N�MEROS***\n\n\n");
    do
    {
           
    printf ("Digite um n�mero inteiro entre 50 e 150.\n");
    scanf ("%d", &num);
   
          setbuf(stdin, NULL);
          while (num<50 || num>150)
          {
              printf ("\nN�mero Inv�lido!\n");
              printf ("Digite um n�mero inteiro entre 50 e 150.\n");
              scanf ("%d", &num);
            
          }
          fflush (stdin);
    printf ("\n Deseja continuar?\n");
    scanf ("%c", &escolha);
    }while (escolha == 's' || escolha == 'S');
    
    printf ("\n\n\n***FIM***\n\n\n");
    fflush (stdin);
    getchar ();
    return 0;
}
