#ifndef FUNCOES_H_INCLUDED
#define FUNCOES_H_INCLUDED

#define num_encomenda_1 "Passagem numero "
#define num_encomenda_3 ".txt"

#include <dirent.h>


void hidecursor()
{
   HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
   CONSOLE_CURSOR_INFO info;
   info.dwSize = 100;
   info.bVisible = FALSE;
   SetConsoleCursorInfo(consoleHandle, &info);
}

int numfiles(char path[255])
{
    struct dirent *de;  // Pointer for directory entry
    int numberoffiles=0;
printf("path: %s\n\n",path);
    DIR *dr = opendir(path);

    if (dr == NULL)  // opendir returns NULL if couldn't open directory
    {
        printf("Could not open current directory" );
        return 0;
    }

        // for readdir()
        while ((de = readdir(dr)) != NULL)
        {
            if ( !strcmp(de->d_name, ".") || !strcmp(de->d_name, "..") )
            {
                // do nothing (straight logic)
            }
            else
            {
                numberoffiles++;
            }
        }
    closedir(dr);
    return numberoffiles;
}
int exists(const char *fname) ///Verifica se o ficheiro existe
{
    FILE *file;
    if ((file = fopen(fname, "r"))!=NULL)
    {
        fclose(file);
        return 1;
    }
    return 0;
}

void recibo(char origem[255],char destino[255],int roundtrip,float preco_voo_ida,float preco_voo_volta,char email[255])
{
    FILE *ficheiro;
    FILE *ficheiro_temp;
    FILE *info_mail;
    char num_encomenda_2[5];
    char num_encomenda_final[100];
    char num_encomenda_final_temp[100];  ///Usada para o fprintf
    char fnum_encomenda_final[999];      //Usada para abrir o ficheiro
    int increase=1;
    float Pre_Tax_Price;
    float TP;


        do{ ///Ciclo de repeticao para o nome do proximo recibo nao ser igual a nenhum dos anteriores
        strcpy(num_encomenda_final, ""); ///Reseta a string

        sprintf(num_encomenda_2,"%i",increase); ///Altera o numero de encomenda
        strcat(num_encomenda_final,num_encomenda_1);
        strcat(num_encomenda_final,num_encomenda_2);
        strcpy(num_encomenda_final_temp,num_encomenda_final);
        strcat(num_encomenda_final,num_encomenda_3);
        strcpy(fnum_encomenda_final," ");
        sprintf(fnum_encomenda_final,"Files\\Encomendas\\%s",num_encomenda_final);
        increase++;

    }while(exists(fnum_encomenda_final)==1);


    ficheiro=fopen(fnum_encomenda_final,"w");
    ficheiro_temp=fopen("Files\\TEMP\\recibo.txt","w");
    info_mail=fopen("Files\\TEMP\\email.txt","w");
    fprintf(info_mail,email);

    TP=preco_voo_ida+preco_voo_volta;
    Pre_Tax_Price=TP-(TP/(1+0.23)*0.23);

    if(roundtrip==1)
    {
    fprintf(ficheiro,"%s \n Recibo do voo:\n Voo de %s a %s: %.2f %c\n Voo de %s a %s: %.2f Eur\n Iva Aplicado de acordo com a Taxa legal de 23%c \nTotal Sem IVA: %.2f %c\nTotal: %.2f Eur\n",num_encomenda_final_temp,origem,destino,preco_voo_ida,128,destino,origem,preco_voo_volta,37,Pre_Tax_Price,128,preco_voo_ida+preco_voo_volta);
    fprintf(ficheiro_temp,"%s \n%s\n Recibo do voo:\n Voo de %s a %s: %.2f Eur\n Voo de %s a %s: %.2f Eur\n Iva Aplicado de acordo com a Taxa legal de 23%c \nTotal Sem IVA: %.2f %c\nTotal: %.2f Eur\n",num_encomenda_final_temp,email,origem,destino,preco_voo_ida,destino,origem,preco_voo_volta,37,Pre_Tax_Price,128,preco_voo_ida+preco_voo_volta);
    }
    else if(roundtrip==0)
    {
    fprintf(ficheiro,"%s \n Recibo do voo:\n Voo de %s a %s: %f Eur\n Iva Aplicado de acordo com a Taxa legal de 23%c \nTotal: %f Eur\n",num_encomenda_final_temp,origem,destino,preco_voo_ida,37,preco_voo_ida);
    fprintf(ficheiro_temp,"%s \n%s\n Recibo do voo:\n Voo de %s a %s: %f Eur\n Iva Aplicado de acordo com a Taxa legal de 23%c \n Total: %f Eur\n",num_encomenda_final_temp,email,origem,destino,preco_voo_ida,37,preco_voo_ida);
    }

    fclose(info_mail);
    fclose(ficheiro);
    fclose(ficheiro_temp);
    //system("Python\\mailsender.py");   ///Abre o script de python que envia o email
    system("Python\\dist\\mailsender.exe"); ///Abre a app em python que envia o email
    printf("recibo enviado para o seu email\n");


}

/*int selecionar_origem()
{
    struct a{
    int codigo[10];
    char nome[50][10];
    char destinos[255][5][5]={                                  //5 continentes cada um com 5 destinos
        {"Lisboa","Madrid","Porto","Ponta Delgada","Madeira"},
        {"Porto","Toronto","Holanda","Heathrow","Paris"},
        {""},

    };
    };


}
*/
#endif // FUNCOES_H_INCLUDED


