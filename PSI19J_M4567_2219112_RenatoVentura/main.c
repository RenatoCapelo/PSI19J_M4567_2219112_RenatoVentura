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
#include "horarios.h"
#include "Consulta_Reservas.h"
#include "perfil_cliente.h"

int firstmenu()
{
    int option=first_layout();
    bool checker=false;
    do{
    int id_cliente=0;
    int value_pass_comp=0;
    char pais_cliente[255]="";
    char email_input[255]="";
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
            fscanf(logon,"%i %i %s %s %i %s %s",&login.user_type,&id_cliente,login.nome1_cliente,login.nome2_cliente,&login.nif_cliente,login.encrypted_password,pais_cliente);
            fclose(logon);
            fflush(stdin);
            if(strcasecmp(login.encrypted_password,password_input)==0)
            {
                printf("\nLogado: %s\n",email_input);
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
                    strcpy(login.encrypted_password,pass_temp_1);strcpy(pass_temp_1,"");strcpy(pass_temp_2,"");
                    for(int a=0;a<strlen(login.encrypted_password);a++)
                    {
                        login.encrypted_password[a]=login.encrypted_password[a]-3;
                    }

                }
            }while(value_pass_comp!=0);
            login.num_cliente=numfiles("./Files/Users/Logins");
            fprintf(reg,"0 %i %s %s %i %s %s",login.num_cliente,login.nome1_cliente,login.nome2_cliente,login.nif_cliente,login.encrypted_password,login.pais_cliente);
            fclose(reg);
            fflush(stdin);


            system("cls");
            gotoxy(42,12);puts("Registo Efetuado com sucesso :D");
            puts("\n\n\n                                     Pressione qualquer tecla para continuar");
            getch();
            checker=true;
            return option;


        }


    }
    if(option==3) ///User Manual
    {
        printf("Irá se abrir o PDF com o Manual de utilizador, para prosseguir com o programa, por favor feche a janela do manual");
        system("Files\\PDFs\\ManualUtilizador.pdf");
        system("cls");
        checker=true;
        return option;
    }
    if(option==4) ///Fechar Programa
    {
        checker=true;
        return option;
    }
    }while(checker==false);
    return 0;
}

int secondmenu()
{
    segundo_layout:
    switch(secondlayout())
    {
    case 1:

        ticket_selling();
        goto segundo_layout;
        return 1;
        break;
    case 2:
        horarios();
        goto segundo_layout;
        return 2;
        break;

    case 3:
        consulta();
        goto segundo_layout;
        return 3;
        break;
    case 4:
        perfil_cliente();
        goto segundo_layout;
        return 4;
        break;
    case 5:
        return 5;
        break;
    case 6:
        return 6;
        break;
    }
    return 0;
}

int main()
{
    setlocale(LC_ALL,"Portuguese");
    system("title Aero Portugal");

    puts("\n\n                                                         WARNING!\n\n\n");

    puts("                      Antes De Iniciar o Programa, por favor verifique se tem a Escala do Ecrã a 100\%,");
    puts("                      caso contrário o programa não irá funcionar como pretendido.\n\n");
    puts("                      Para aceder a esta definição pressione a tecla Windows seguida da Tecla \"I\"\n\n                      De seguida siga estes passos:");
    puts("                      Sistema --> Ecrã --> \"Alterar o Tamanho do Texto, aplicações e outros items\"\n\n");
    puts("                      Para mais informações, consulte o Manual de Utilizador (disponivel na próxima página)\n\n");
    if(exists("Python\\dist\\mailsender.exe")==0)
    {
        puts("                                        Pressione Qualquer Tecla Para continuar");
        getch();
        system("cls");

        puts("\n\n                                                         WARNING!\n\n\n");
        puts("                          O Programa não pode iniciar com sucesso, pois faltam ficheiros requiridos.\n");
        puts("                          Por favor tente instalar novamente com o seu antivirus desligado,\n");
        puts("                          ou abra uma excessão à pasta de instalação do programa no seu antivirus\n\n");
        puts("                                        Pressione Qualquer Tecla Para Sair do Programa");
        getch();
        return 0;
    }
    else
    {
        puts("                                         Pressione Qualquer Tecla Para continuar");
        getch();
    }

    system("cls");
    //Determina o tamanho da consola para o menu não ficar desformado em outros dispositivos
    HWND console = GetConsoleWindow();
    RECT ConsoleRect;
    GetWindowRect(console, &ConsoleRect);
    MoveWindow(console, ConsoleRect.left, ConsoleRect.top, 970/*largura em pixeis*/, 500/*altura em pixeis*/, TRUE);
    //

    inicio: ;
    int option=firstmenu();
    if(option==4)
    {
        printf("Até à Próxima");
        Sleep(1500);
       return 0;
    }

    else if(option==1 || option==2)
    {
        int option2=secondmenu();
        system("cls");
        switch(option2)
        {
            case 5: goto inicio;break;
            case 6: printf("Até à Próxima");Sleep(1500);return 0;break;
            default: break;
        }
    }
    else if(option==3)
    {
        goto inicio;
    }
    else
    {
        printf("Error ID:1, por favor contacte o suporte técnico e informe o ID deste erro.");
    }

return 0;
}
