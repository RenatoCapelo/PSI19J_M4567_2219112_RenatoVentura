#include <stdio.h>  //Biblioteca base do C
#include <stdlib.h> //Biblioteca base do C
#include <string.h> //Biblioteca para manipular strings
#include <locale.h> //Biblioteca para os caracteres da lingua portuguesa
#include <time.h>   //Biblioteca para obter o tempo
#include <windows.h>//Biblioteca para funções da consola do windows
#include "conio.c"  //Biblioteca para cores
#include <dirent.h> //Biblioteca para verificar os ficheiros de um diretorio
#include <stdbool.h>//Biblioteca para utilizar boleanos
#include "structures.h"
#include "funcoes.h"
#include "layouts.h"
#include "email.h"
#include "Venda Bilhetes.h"

///Nota 1: O programa deverá criar novos ficheiros txt para cada cliente que encomenda para neste caso registar que reservas cada um tem


int firstmenu()
{
    int option=first_layout();
    bool checker=false;
    do{
    int id_cliente=0;
    int nif=0;
    int value_pass_comp=0;
    char pais_cliente[255]="";
    char email_input[255]="";
    char pass_file[255]="";
    char pass_temp_1[255]="";
    char pass_temp_2[255]="";
    char password_input[255]="";
    char file_input[50]="";
    checker=false;

    if(option==1) ///Login
    {
        printf("Insira o seu email: ");
        gets(email_input);

        printf("\nInsira a pass: ");
        gets(password_input);
        for(int a=0;a<strlen(password_input);a++)
        {
            password_input[a]=password_input[a]-3;
        }


        strcat(file_input,"./Files/Users/Logins/");
        strcat(file_input,email_input);
        strcat(file_input,".txt");
        FILE *logon;


        if((logon=fopen(file_input,"r"))!=NULL)
        {
            fscanf(logon,"%i %i %s %s %i %s %s",&login.user_type,&id_cliente,login.nome1_cliente,login.nome2_cliente,&nif,pass_file,pais_cliente);
            fclose(logon);
            fflush(stdin);
            if(strcasecmp(pass_file,password_input)==0)
            {
                printf("Logado: %s\n",email_input);
                sleep(1);
                strcpy(login.email_cliente,email_input);
                strcpy(login.pais_cliente,pais_cliente);
                login.num_cliente=id_cliente;
                checker=true;
                return option;
            }
            else
            {
                checker=false;
                printf("Palavra Pass errada, por favor confira os seus dados\n\n");
                sleep(2);
                system("cls");

            }
        }
        else{
                checker=false;
                printf("\nCliente nao existente, por favor confira os seus dados\n\n");
                sleep(2);
                system("cls");
        }
    }
    if(option==2) ///Signup
    {
        /*Label do Goto para caso o user já exista*/registo:
        puts("Insira o seu email: ");gets(email_input);
        strcat(file_input,"./Files/Users/Logins/");
        strcat(file_input,email_input);
        strcat(file_input,".txt");
        FILE *reg;
        if(exists(file_input)==1)   //Deteta se o ficheiro existe ou não, caso exista o programa retorna para a função de registo.
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
            login.num_cliente=numfiles("./Files/Users/Logins");
            fprintf(reg,"0 %i %s %s %i %s %s",login.num_cliente,login.nome1_cliente,login.nome2_cliente,login.nif_cliente,pass_file,login.pais_cliente);
            fclose(reg);
            fflush(stdin);


            system("cls");
            gotoxy(42,12);puts("Registo Efetuado com sucesso :D");
            system("pause");
            checker=true;
            return option;


        }


    }
    if(option==3) ///User Manual
    {
        printf("Irá se abrir o PDF com o Manual de utilizador, para prosseguir com o programa, por favor feche a janela do manual");
        system("Files\\PDFs\\ManualUtilizador.pdf");
        checker=true;
        return option;
    }
    if(option==4) ///Fechar Programa
    {
        checker=true;
        return option;
    }
    }while(checker==false);
}

int secondmenu()
{
    switch(secondlayout())
    {
    case 1:

        ticket_selling();
        return 1;
        break;
    case 2:
        return 2;
        break;

    case 3:
        return 3;
        break;
    case 4:
        return 4;
        break;
    case 5:
        return 5;
        break;
    case 6:
        return 6;
        break;
    }

}

int main()
{

    setlocale(LC_ALL,"Portuguese");
    //Determina o tamanho da consola para o menu não ficar desformado em outros dispositivos
    HWND console = GetConsoleWindow();
    RECT ConsoleRect;
    GetWindowRect(console, &ConsoleRect);
    MoveWindow(console, ConsoleRect.left, ConsoleRect.top, 970, 500, TRUE);
    //

    inicio: ;
    int option=firstmenu();
    int option2;
    if(option==4)
    {
        printf("Até à Próxima");
       return 0;
    }

    else if(option==1 || option==2)
    {
        int option2=secondmenu();
        system("cls");
        switch(option2)
        {
            case 5: goto inicio;break;
            case 6: return 0;break;
            default: break;
        }
    }
    else if(option==3)
    {
        printf("menuzinho drenastico");
        //return 0;
    }
    else
    {
        printf("Error ID:1, por favor contacte o suporte técnico e informe o ID deste erro.");
    }

return 0;
}
