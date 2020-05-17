#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <time.h>
#include <windows.h>
#include "funcoes.h"
#include "conio.c"
#include <dirent.h>
#include <unistd.h>


///Nota 1: O programa deverá criar novos ficheiros txt para cada cliente que encomendas para neste caso registar que reservas cada um tem

struct Login{
    int num_cliente;
    char nome1_cliente[255];
    char nome2_cliente[255];
    char email_cliente[255];
    char pais_cliente[255];
    int nif_cliente;
};
struct Login login;

int inicio()
{
int option=1;
char getcharacter;
    //ponteiro para struct que armazena data e hora
    struct tm *data_hora_atual;

  //variável do tipo time_t para armazenar o tempo em segundos
    time_t segundos;
    while(1)
    {
      //obtendo o tempo em segundos
      time(&segundos);

       //para converter de segundos para o tempo local
    data_hora_atual = localtime(&segundos);


    if(option==1){
        while(!kbhit()){
        time(&segundos);data_hora_atual = localtime(&segundos);
    hidecursor(); ///Caso esta função não seja chamada. O cursor irá ficar "maluco" a percorrer todas as linhas da consola pois não tem tempo para chegar ao fim antes do reinicio
    gotoxy(2,1);printf("   _____________________________________________________________________________________________________________");
    gotoxy(2,2);printf("  /                                            ");textcolor(LIGHTGREEN);printf(".......");textcolor(GREEN+BLINK);printf(",,,..."); textcolor(RED);printf("/*******");textcolor(WHITE);printf("                                            \\");
    gotoxy(2,3);printf(" /                                             ");textcolor(LIGHTGREEN);printf(",,,,,,,");textcolor(GREEN+BLINK);printf("///");textcolor(LIGHTGREEN);printf("*,,"); textcolor(RED);printf("###########(");textcolor(WHITE);printf("                                         \\");
    gotoxy(2,4);printf("|                                                 ");textcolor(LIGHTGREEN);printf(",,,");textcolor(GREEN+BLINK);printf("/*");textcolor(LIGHTGREEN);printf(",, ,,"); textcolor(RED);printf("####.   ####");textcolor(WHITE);printf("                                          |");
    gotoxy(2,5);printf("|                                                 ");textcolor(LIGHTGREEN);printf(",,*");textcolor(GREEN+BLINK);printf("/*");textcolor(LIGHTGREEN);printf(",, ,,"); textcolor(RED);printf("############");textcolor(WHITE);printf("                                          |");
    gotoxy(2,6);printf("|                                                 ");textcolor(LIGHTGREEN);printf(",,");textcolor(GREEN+BLINK);printf("//*");textcolor(LIGHTGREEN);printf(",,,,,"); textcolor(RED);printf("#########");textcolor(WHITE);printf("                                             |");
    gotoxy(2,7);printf("|                                                 ");textcolor(LIGHTGREEN);printf(",");textcolor(GREEN+BLINK);printf("///*");textcolor(LIGHTGREEN);printf("     "); textcolor(RED);printf("####,");textcolor(WHITE);printf("                                                 |");
    gotoxy(2,8);printf("|-----------------------------------------------------------------------------------------------------------------|");
    gotoxy(2,9);printf("|                                                                                                                 |");
    gotoxy(2,10);printf(" ");gotoxy(25,10);printf("                     São %i:%i:%i do dia %i/%i/%i                                          ",data_hora_atual->tm_hour,data_hora_atual->tm_min,data_hora_atual->tm_sec,data_hora_atual->tm_mday,data_hora_atual->tm_mon+1,data_hora_atual->tm_year+1900);
    gotoxy(2,11);printf("|");     gotoxy(25,11);    puts(" _________________________________________________________________                         |");
    gotoxy(2,12);printf("|");     gotoxy(25,12);    puts("/-----------------------------------------------------------------\\                        |");
    gotoxy(2,13);printf("|");     gotoxy(25,13);    puts("*                                                                 *                        |");
    gotoxy(2,14);printf("|");     gotoxy(25,14);    puts("*                                                                 *                        |");
    gotoxy(2,15);printf("|");     gotoxy(25,15);  printf("*                            ");textbackground(LIGHTBLUE);printf(" Login ");textbackground(BLACK);printf("                              *                        |");
    gotoxy(2,16);printf("|");     gotoxy(25,16);    puts("*                                                                 *                        |");
    gotoxy(2,17);printf("|");     gotoxy(25,17);  printf("*                            Sign Up                              *                        |");
    gotoxy(2,18);printf("|");     gotoxy(25,18);    puts("*                                                                 *                        |");
    gotoxy(2,19);printf("|");     gotoxy(25,19);    puts("*                   Ver o Manual do Utilizador                    *                        |");
    gotoxy(2,20);printf("|");     gotoxy(25,20);    puts("*                                                                 *                        |");
    gotoxy(2,21);printf("|");     gotoxy(25,21);    puts("*                                                                 *                        |");
    gotoxy(2,22);printf("|");     gotoxy(25,22);    puts("\\_________________________________________________________________/                        |");
    gotoxy(2,23);printf("|                                                                                                                 |\n");
    gotoxy(2,24);printf("|                                                                                                                 |\n");
    gotoxy(2,25);printf("|                                                                                                                 |\n");
    gotoxy(2,26);printf(" |                                                                                                                 |\n");
    gotoxy(2,27);printf("  \\                                                                                                               /\n");
    gotoxy(2,28);printf("   \\_____________________________________________________________________________________________________________/");
       time(&segundos);
        }
    }
    else if(option==2)
    {
        while(!kbhit()){
        time(&segundos);data_hora_atual = localtime(&segundos);
    hidecursor(); ///Caso esta função não seja chamada. O cursor irá ficar "maluco" a percorrer todas as linhas da consola pois não tem tempo para chegar ao fim antes do reinicio
    gotoxy(2,1);printf("   _____________________________________________________________________________________________________________");
    gotoxy(2,2);printf("  /                                            ");textcolor(LIGHTGREEN);printf(".......");textcolor(GREEN+BLINK);printf(",,,..."); textcolor(RED);printf("/*******");textcolor(WHITE);printf("                                            \\");
    gotoxy(2,3);printf(" /                                             ");textcolor(LIGHTGREEN);printf(",,,,,,,");textcolor(GREEN+BLINK);printf("///");textcolor(LIGHTGREEN);printf("*,,"); textcolor(RED);printf("###########(");textcolor(WHITE);printf("                                         \\");
    gotoxy(2,4);printf("|                                                 ");textcolor(LIGHTGREEN);printf(",,,");textcolor(GREEN+BLINK);printf("/*");textcolor(LIGHTGREEN);printf(",, ,,"); textcolor(RED);printf("####.   ####");textcolor(WHITE);printf("                                          |");
    gotoxy(2,5);printf("|                                                 ");textcolor(LIGHTGREEN);printf(",,*");textcolor(GREEN+BLINK);printf("/*");textcolor(LIGHTGREEN);printf(",, ,,"); textcolor(RED);printf("############");textcolor(WHITE);printf("                                          |");
    gotoxy(2,6);printf("|                                                 ");textcolor(LIGHTGREEN);printf(",,");textcolor(GREEN+BLINK);printf("//*");textcolor(LIGHTGREEN);printf(",,,,,"); textcolor(RED);printf("#########");textcolor(WHITE);printf("                                             |");
    gotoxy(2,7);printf("|                                                 ");textcolor(LIGHTGREEN);printf(",");textcolor(GREEN+BLINK);printf("///*");textcolor(LIGHTGREEN);printf("     "); textcolor(RED);printf("####,");textcolor(WHITE);printf("                                                 |");
    gotoxy(2,8);printf("|-----------------------------------------------------------------------------------------------------------------|");
    gotoxy(2,9);printf("|                                                                                                                 |");
    gotoxy(2,10);printf(" ");gotoxy(25,10);printf("                     São %i:%i:%i do dia %i/%i/%i                                          ",data_hora_atual->tm_hour,data_hora_atual->tm_min,data_hora_atual->tm_sec,data_hora_atual->tm_mday,data_hora_atual->tm_mon+1,data_hora_atual->tm_year+1900);
    gotoxy(2,11);printf("|");     gotoxy(25,11);    puts(" _________________________________________________________________                         |");
    gotoxy(2,12);printf("|");     gotoxy(25,12);    puts("/-----------------------------------------------------------------\\                        |");
    gotoxy(2,13);printf("|");     gotoxy(25,13);    puts("*                                                                 *                        |");
    gotoxy(2,14);printf("|");     gotoxy(25,14);    puts("*                                                                 *                        |");
    gotoxy(2,15);printf("|");     gotoxy(25,15);  printf("*                             Login                               *                        |");
    gotoxy(2,16);printf("|");     gotoxy(25,16);    puts("*                                                                 *                        |");
    gotoxy(2,17);printf("|");     gotoxy(25,17);  printf("*                           ");textbackground(LIGHTBLUE);printf(" Sign Up ");textbackground(BLACK);printf("                             *                        |");
    gotoxy(2,18);printf("|");     gotoxy(25,18);    puts("*                                                                 *                        |");
    gotoxy(2,19);printf("|");     gotoxy(25,19);    puts("*                   Ver o Manual do Utilizador                    *                        |");
    gotoxy(2,20);printf("|");     gotoxy(25,20);    puts("*                                                                 *                        |");
    gotoxy(2,21);printf("|");     gotoxy(25,21);    puts("*                                                                 *                        |");
    gotoxy(2,22);printf("|");     gotoxy(25,22);    puts("\\_________________________________________________________________/                        |");
    gotoxy(2,23);printf("|                                                                                                                 |\n");
    gotoxy(2,24);printf("|                                                                                                                 |\n");
    gotoxy(2,25);printf("|                                                                                                                 |\n");
    gotoxy(2,26);printf(" |                                                                                                                 |\n");
    gotoxy(2,27);printf("  \\                                                                                                               /\n");
    gotoxy(2,28);printf("   \\_____________________________________________________________________________________________________________/");
       time(&segundos);data_hora_atual = localtime(&segundos);
        }
    }
    else if(option==3)
    {
        while(!kbhit()){
        time(&segundos);data_hora_atual = localtime(&segundos);
    //hidecursor(); ///Caso esta função não seja chamada. O cursor irá ficar "maluco" a percorrer todas as linhas da consola pois não tem tempo para chegar ao fim antes do reinicio
    gotoxy(2,1);printf("   _____________________________________________________________________________________________________________");
    gotoxy(2,2);printf("  /                                            ");textcolor(LIGHTGREEN);printf(".......");textcolor(GREEN+BLINK);printf(",,,..."); textcolor(RED);printf("/*******");textcolor(WHITE);printf("                                            \\");
    gotoxy(2,3);printf(" /                                             ");textcolor(LIGHTGREEN);printf(",,,,,,,");textcolor(GREEN+BLINK);printf("///");textcolor(LIGHTGREEN);printf("*,,"); textcolor(RED);printf("###########(");textcolor(WHITE);printf("                                         \\");
    gotoxy(2,4);printf("|                                                 ");textcolor(LIGHTGREEN);printf(",,,");textcolor(GREEN+BLINK);printf("/*");textcolor(LIGHTGREEN);printf(",, ,,"); textcolor(RED);printf("####.   ####");textcolor(WHITE);printf("                                          |");
    gotoxy(2,5);printf("|                                                 ");textcolor(LIGHTGREEN);printf(",,*");textcolor(GREEN+BLINK);printf("/*");textcolor(LIGHTGREEN);printf(",, ,,"); textcolor(RED);printf("############");textcolor(WHITE);printf("                                          |");
    gotoxy(2,6);printf("|                                                 ");textcolor(LIGHTGREEN);printf(",,");textcolor(GREEN+BLINK);printf("//*");textcolor(LIGHTGREEN);printf(",,,,,"); textcolor(RED);printf("#########");textcolor(WHITE);printf("                                             |");
    gotoxy(2,7);printf("|                                                 ");textcolor(LIGHTGREEN);printf(",");textcolor(GREEN+BLINK);printf("///*");textcolor(LIGHTGREEN);printf("     "); textcolor(RED);printf("####,");textcolor(WHITE);printf("                                                 |");
    gotoxy(2,8);printf("|-----------------------------------------------------------------------------------------------------------------|");
    gotoxy(2,9);printf("|                                                                                                                 |");
    gotoxy(2,10);printf(" ");gotoxy(25,10);printf("                     São %i:%i:%i do dia %i/%i/%i                                          ",data_hora_atual->tm_hour,data_hora_atual->tm_min,data_hora_atual->tm_sec,data_hora_atual->tm_mday,data_hora_atual->tm_mon+1,data_hora_atual->tm_year+1900);
    gotoxy(2,11);printf("|");     gotoxy(25,11);    puts(" _________________________________________________________________                         |");
    gotoxy(2,12);printf("|");     gotoxy(25,12);    puts("/-----------------------------------------------------------------\\                        |");
    gotoxy(2,13);printf("|");     gotoxy(25,13);    puts("*                                                                 *                        |");
    gotoxy(2,14);printf("|");     gotoxy(25,14);    puts("*                                                                 *                        |");
    gotoxy(2,15);printf("|");     gotoxy(25,15);  printf("*                             Login                               *                        |");
    gotoxy(2,16);printf("|");     gotoxy(25,16);    puts("*                                                                 *                        |");
    gotoxy(2,17);printf("|");     gotoxy(25,17);  printf("*                            Sign Up                              *                        |");
    gotoxy(2,18);printf("|");     gotoxy(25,18);    puts("*                                                                 *                        |");
    gotoxy(2,19);printf("|");     gotoxy(25,19);    printf("*                  ");textbackground(LIGHTBLUE);printf(" Ver o Manual do Utilizador ");textbackground(BLACK);printf("                   *                        |");
    gotoxy(2,20);printf("|");     gotoxy(25,20);    puts("*                                                                 *                        |");
    gotoxy(2,21);printf("|");     gotoxy(25,21);    puts("*                                                                 *                        |");
    gotoxy(2,22);printf("|");     gotoxy(25,22);    puts("\\_________________________________________________________________/                        |");
    gotoxy(2,23);printf("|                                                                                                                 |\n");
    gotoxy(2,24);printf("|                                                                                                                 |\n");
    gotoxy(2,25);printf("|                                                                                                                 |\n");
    gotoxy(2,26);printf(" |                                                                                                                 |\n");
    gotoxy(2,27);printf("  \\                                                                                                               /\n");
    gotoxy(2,28);printf("   \\_____________________________________________________________________________________________________________/");
       time(&segundos);data_hora_atual = localtime(&segundos);
        }
    }
    getcharacter=getch();
    if(getcharacter =='s'||getcharacter =='S')
    {
        if(option>=3)
        {
            option=3;
        }
        if(option<3)
        {
            option++;system("cls");
        }
        else{}
    }

    else if(getcharacter == 'w' || getcharacter =='W')
    {
        if(option<=1)
        {
            option=1;
        }
        if(option>1)
        {
            option--;system("cls");
        }
    }

    else if(getcharacter == '\r')
    {
        system("cls");
        return option;
    }

    else
    {
        option=option;
    }

    }
}


int menu()
{
    int option=inicio();

    int numberoffiles;
    int id_cliente;
    int nif;
    int value_pass_comp;
    char pais_cliente[255];
    char email_input[255];
    char pass_file[255];
    char pass_temp_1[255];
    char pass_temp_2[255];
    char password_input[255];
    char file_input[50]="";

    if(option==1)
    {
        printf("Insira o seu email: ");
        gets(email_input);

        printf("\nInsira a pass: ");
        gets(password_input);
        for(int a=0;a<strlen(password_input);a++)
        {
            password_input[a]=password_input[a]-3;
        }

        //printf("%s\n",password_input);

        strcat(file_input,"./Files/Users/Logins/");
        strcat(file_input,email_input);
        strcat(file_input,".txt");
        FILE *logon;

        puts(file_input);

        if((logon=fopen(file_input,"r"))!=NULL)
        {
            fscanf(logon,"%i %s %s %i %s %s",&id_cliente,login.nome1_cliente,login.nome2_cliente,&nif,pass_file,pais_cliente);
            fclose(logon);
            fflush(stdin);
            if(strcasecmp(pass_file,password_input)==0)
            {
                printf("Logado: %s\n",email_input);
                strcpy(login.email_cliente,email_input);
                strcpy(login.pais_cliente,pais_cliente);
                login.num_cliente=id_cliente;

                return id_cliente;
            }
            else
            {
                printf("Palavra Pass errada");
            }
        }
        else{printf("\nCliente nao existente");}
    }
    if(option==2)
    {
        /*Label do Goto para caso o user já exista*/registo:
        puts("Insira o seu email: ");gets(email_input);
        strcat(file_input,"./Files/Users/Logins/");
        strcat(file_input,email_input);
        strcat(file_input,".txt");
        FILE *reg;
        if((reg=fopen(file_input,"r")!=NULL))   //Deteta se o ficheiro existe ou não, caso exista o programa retorna para a função de registo.
        {
            textbackground(LIGHTRED);puts("Email já registado,  por favor insira outro Email");textbackground(BLACK);
            strcpy(file_input,""); ///Reseta a string
            goto registo;   //Volta ao Inicio do registo
        }

        else
        {
            textbackground(LIGHTGREEN);puts("registo UwU");textbackground(BLACK);
            reg=fopen(file_input,"w");
            strcpy(login.email_cliente,email_input);
            puts("Insira o seu Nome"); gets(login.nome1_cliente);
            puts("Insira o seu Apelido"); gets(login.nome2_cliente);
            puts("Insira o Seu país de Residencia"); gets(login.pais_cliente);
            puts("Insira o Seu NIF"); scanf("%i",&login.nif_cliente);
            fflush(stdin);
            do{
                puts("Insira a palavra passe: "); gets(pass_temp_1);
                puts("Insira outra vez a sua palavra pass: "); gets(pass_temp_2);
                value_pass_comp=strcmp(pass_temp_1,pass_temp_2);
                if(value_pass_comp!=0)
                {
                    puts("As palavras passes inseridas não são correspondentes, por favor, insira-las outra vez");
                }
                else
                {
                    strcpy(pass_file,pass_temp_1);strcpy(pass_temp_1,"");strcpy(pass_temp_2,"");
                    for(int a=0;a<strlen(pass_file);a++)
                    {
                        pass_file[a]=pass_file[a]-3;
                    }

                }
            }while(value_pass_comp!=0);
            fprintf(reg,"%i %s %s %i %s %s",id_cliente,login.nome1_cliente,login.nome2_cliente,login.nif_cliente,pass_file,pais_cliente);
            fclose(reg);
            fflush(stdin);

        }


    }
    if(option==3)
    {
        printf("Irá se abrir o PDF com o Manual de utilizador, para prosseguir com o programa, por favor feche a janela do manual");
        system("Files\\PDFs\\ManualUtilizador.pdf");
        printf("aaaaaaaaaaaaaaaaaaa");
    }
    if(option==0)
    {
        return 0;
    }
}

int main()
{   setlocale(LC_ALL,"Portuguese");
    //Determina o tamanho da consola para o menu não ficar desformado em outros dispositivos
    HWND console = GetConsoleWindow();
    RECT ConsoleRect;
    GetWindowRect(console, &ConsoleRect);
    MoveWindow(console, ConsoleRect.left, ConsoleRect.top, 970, 500, TRUE);
    //



    int user=menu();

    printf("\nO user é o %i,chama-se %s %s, o nif é: %i, o email é %s e vive em: %s",login.num_cliente,login.nome1_cliente,login.nome2_cliente,login.nif_cliente,login.email_cliente,login.pais_cliente);

    //recibo("lisboa","porto",1,150,200,login.email_cliente);

    return 0;
}
