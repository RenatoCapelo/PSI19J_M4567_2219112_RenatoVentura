#ifndef PERFIL_CLIENTE_H_INCLUDED
#define PERFIL_CLIENTE_H_INCLUDED

#include "structures.h"
struct Login login;
void perfil_cliente()
{
    cliente: ;
    char password_input[255]="";
    char password_input_2[255]="";
    char decrypted_password[255]="";
    char path[999];
    char getchar;
    bool checker;
    for(int a=0;a<strlen(login.encrypted_password);a++)
    {
        decrypted_password[a]=login.encrypted_password[a]+3;
    }



    system("cls");
    puts("                  Dados do Perfil");
    printf("O Meu Nome: %s %s\n",login.nome1_cliente,login.nome2_cliente);
    printf("O Meu País: %s\n",login.pais_cliente);
    printf("O Meu NIF: %i\n",login.nif_cliente);
    printf("O Meu Email: %s\n",login.email_cliente);
    puts("Pressione 1 para alterar os seus dados, ou pressione outra tecla para retornar ao menu principal");
    getchar=getch();
    if(getchar=='1')
    {
        puts("\n\nInsira a sua password atual para confirmar a sua identidade");
        gets(password_input);
        if(strcmp(password_input,decrypted_password)==0)
        {
            strcpy(decrypted_password,"");

            puts("\n\nDeseja alterar o seu nome? (S/n): ");
            getchar=getch();
            if(getchar=='S' || getchar=='s')
            {
                puts("\nInsira o seu Nome:");
                gets(login.nome1_cliente);
                puts("Insira o seu Apelido:");
                gets(login.nome2_cliente);
            }

            puts("\nDeseja alterar o seu país? (S/n): ");
            getchar=getch();
            if(getchar=='S' || getchar=='s')
            {
                puts("\nInsira o seu País:");
                gets(login.pais_cliente);
            }

            puts("\n\nDeseja alterar o seu NIF? (S/n): ");
            getchar=getch();
            if(getchar=='S' || getchar=='s')
            {
                puts("\nInsira o seu NIF:");
                scanf("%i",&login.nif_cliente);
                fflush(stdin);
            }

            puts("\n\nDeseja alterar a senha? (S/n): ");
            getchar=getch();
            if(getchar=='S' || getchar=='s')
            {
                do{
                puts("\nInsira a sua nova Senha:");
                gets(password_input);
                puts("\nRepita a sua nova Senha:");
                gets(password_input_2);
                if(strcmp(password_input,password_input_2)==0)
                {
                    strcpy(password_input_2,"");
                    checker=TRUE;
                    for(int a=0;a<strlen(password_input);a++)
                    {
                        password_input[a]=password_input[a]-3;
                    }
                    strcpy(login.encrypted_password,password_input);
                }
                else
                {
                    printf("As palavras pass não correspondem, por favor tente de novo:");
                    checker=FALSE;
                }
                }while(checker==FALSE);
            }
            FILE *cliente;
            sprintf(path,"./Files/Users/Logins/%s.txt",login.email_cliente);
            cliente=fopen(path,"w");
            fprintf(cliente,"%i %i %s %s %i %s %s",login.user_type,login.num_cliente,login.nome1_cliente,login.nome2_cliente,login.nif_cliente,login.encrypted_password,login.pais_cliente);
            fclose(cliente);
        }
        else
        {
            puts("Palavra Passe não correspondente.");
            Sleep(750);
            goto cliente;
        }

    }
    else
    {

        return;
    }
    sleep(1);



}

#endif // PERFIL_CLIENTE_H_INCLUDED
