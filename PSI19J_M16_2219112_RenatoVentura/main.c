#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <time.h>
#include <windows.h>
#include "funcoes.h"
#include "conio.c"


///Nota 1: O programa dever� criar novos ficheiros txt para cada cliente que encomendas para neste caso registar que reservas cada um tem

void inicio()
{

    //ponteiro para struct que armazena data e hora
  struct tm *data_hora_atual;

  //vari�vel do tipo time_t para armazenar o tempo em segundos
  time_t segundos;
while(1==1){
  //obtendo o tempo em segundos
  time(&segundos);

   //para converter de segundos para o tempo local
  data_hora_atual = localtime(&segundos);

hidecursor(); ///Caso esta fun��o n�o seja chamada. O cursor ir� ficar "maluco" a percorrer todas as linhas da consola pois n�o tem tempo para chegar ao fim antes do reinicio

    gotoxy(25,8);   printf("                     S�o %d:%d:%d do dia %d/%d/%d                   ",data_hora_atual->tm_hour,data_hora_atual->tm_min,data_hora_atual->tm_sec,data_hora_atual->tm_mday,data_hora_atual->tm_mon+1,data_hora_atual->tm_year+1900);
    gotoxy(25,9);    puts("/-----------------------------------------------------------------\\");
    gotoxy(25,10);    puts("*                                                                 *");
    gotoxy(25,11);    puts("*                                                                 *");
    gotoxy(25,12);  printf("*                             Login                               *");
    gotoxy(25,13);    puts("*                                                                 *");
    gotoxy(25,14);  printf("*                            Sign Up                              *");
    gotoxy(25,15);    puts("*                                                                 *");
    gotoxy(25,16);    puts("*                   Ver o Manual do Utilizador                    *");
    gotoxy(25,17);    puts("*                                                                 *");
    gotoxy(25,18);    puts("*                                                                 *");
    gotoxy(25,19);    puts("\\-----------------------------------------------------------------/");
   time(&segundos);
    }
}

void menu()
{
    inicio();
}

int main()
{   setlocale(LC_ALL,"Portuguese");
    //Determina o tamanho da consola para o menu n�o ficar desformado em outros dispositivos
    HWND console = GetConsoleWindow();
    RECT ConsoleRect;
    GetWindowRect(console, &ConsoleRect);
    MoveWindow(console, ConsoleRect.left, ConsoleRect.top, 975, 500, TRUE);
    //


    menu();

    //recibo("lisboa","porto",1,150,200,"renatocapelo2003@gmail.com");

    return 0;
}
