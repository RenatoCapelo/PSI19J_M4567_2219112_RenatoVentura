#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <time.h>
#include <windows.h>
#include "funcoes.h"
#include "conio.c"


///Nota 1: O programa deverá criar novos ficheiros txt para cada cliente que encomendas para neste caso registar que reservas cada um tem

void inicio()
{

    //ponteiro para struct que armazena data e hora
  struct tm *data_hora_atual;

  //variável do tipo time_t para armazenar o tempo em segundos
  time_t segundos;
while(1==1){
  //obtendo o tempo em segundos
  time(&segundos);

   //para converter de segundos para o tempo local
  //utilizamos a função localtime
  data_hora_atual = localtime(&segundos);

hidecursor(); ///Caso esta função não seja chamada. O cursor irá ficar "maluco" a percorrer todas as linhas da consola pois não tem tempo para chegar ao fim antes do reinicio

gotoxy(25,3);  printf("                     São %d:%d:%d do dia %d/%d/%d                   ",data_hora_atual->tm_hour,data_hora_atual->tm_min,data_hora_atual->tm_sec,data_hora_atual->tm_mday,data_hora_atual->tm_mon+1,data_hora_atual->tm_year+1900);
   gotoxy(25,4); puts("/-----------------------------------------------------------------\\");
   gotoxy(25,5); puts("*                                                                 *");
   gotoxy(25,6); puts("*                                                                 *");
gotoxy(25,7);  printf("*                             Login                               *");
   gotoxy(25,8); puts("*                                                                 *");
gotoxy(25,9);  printf("*                            Sign Up                              *");
   gotoxy(25,10); puts("*                                                                 *");
   gotoxy(25,11); puts("*                   Ver o Manual do Utilizador                    *");
   gotoxy(25,12); puts("*                                                                 *");
   gotoxy(25,13); puts("*                                                                 *");
   gotoxy(25,14); puts("\\-----------------------------------------------------------------/");
   time(&segundos);
    }
}

void menu()
{
    inicio();
}

int main()
{

    menu();

    ///recibo("lisboa","porto",1,150,200,"renatocapelo2003@gmail.com");

    return 0;
}
