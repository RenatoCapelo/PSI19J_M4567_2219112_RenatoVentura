#ifndef CONSULTA_RESERVAS_H_INCLUDED
#define CONSULTA_RESERVAS_H_INCLUDED

#include "structures.h"

struct Login login;

void consulta()
{

    FILE *file1;
    FILE *file2;

    char path1[1023];
    char path2[1023];
    char line [255]="";
    int loop=0;
    strcpy(path1,"");
    strcat(path1,"./Files/Users/Encomendas/");
    strcat(path1,login.email_cliente);
    strcat(path1,".txt");

    if(exists(path1)==1)
    {
        file1=fopen(path1,"r");

        while (fgets (line, sizeof line, file1) != NULL )
        {
          loop++;
        }
        fclose(file1);
        int reservas[loop];
        strcpy(line,"");
        loop=0;

        file1=fopen(path1,"r");

          while (fgets ( line, sizeof line, file1) != NULL )
          {
            sscanf(line,"%i",&reservas[loop]);
            fflush(stdin);
            loop++;
          }
        fclose (file1);

        for(int a=0;a<loop;a++)
        {
        strcpy(path2,"");

        sprintf(path2,"./Files/Encomendas/Passagem numero %i.txt",reservas[a]);

        file2=fopen(path2,"r");
        strcpy(line,"");
        puts("\n\n");

        while (fgets ( line, sizeof line, file2) != NULL )
          {
            puts(line);
          }
        if(a<loop-1){
            puts("\n    Pressione Qualquer tecla para avançar para a reserva seguinte");
        }
        else{
            puts("\n    Pressione Qualquer tecla para voltar ao menu principal");
        }
        getch();
        system("cls");
        }




    }
    else
    {
        puts("\n\n\n\n\n        Quando efetuar uma reserva ela aparecerá aqui\n");
        puts("\n            Pressione qualquer tecla para prosseguir");
        getch();
    }

}

#endif // CONSULTA_RESERVAS_H_INCLUDED
