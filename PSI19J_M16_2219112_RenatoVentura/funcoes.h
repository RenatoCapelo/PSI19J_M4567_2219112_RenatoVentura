#ifndef FUNCOES_H_INCLUDED
#define FUNCOES_H_INCLUDED

#define num_encomenda_1 "Passagem numero "
#define num_encomenda_3 ".txt"


void hidecursor()
{
   HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
   CONSOLE_CURSOR_INFO info;
   info.dwSize = 100;
   info.bVisible = FALSE;
   SetConsoleCursorInfo(consoleHandle, &info);
}



int exists(const char *fname) ///Verifica se o ficheiro existe
{
    FILE *file;
    if ((file = fopen(fname, "r")))
    {
        fclose(file);
        return 1;
    }
    return 0;
}

void recibo(char origem[255],char destino[255],int roundtrip,int preco_voo_ida,int preco_voo_volta,char email[255])
{
    FILE *ficheiro;
    FILE *ficheiro_temp;
    FILE *info_mail;
    char num_encomenda_2[5];
    char num_encomenda_final[25];
    char num_encomenda_final_temp[25];  ///Usada para o fprintf
    int increase=1;


        do{ ///Ciclo de repetição para o nome do proximo recibo não ser igual a nenhum dos anteriores
        strcpy(num_encomenda_final, ""); ///Reseta a string

        sprintf(num_encomenda_2,"%i",increase); ///Altera o numero de encomenda
        strcat(num_encomenda_final,num_encomenda_1);
        strcat(num_encomenda_final,num_encomenda_2);
        strcpy(num_encomenda_final_temp,num_encomenda_final);
        strcat(num_encomenda_final,num_encomenda_3);

        increase++;

    }while(exists(num_encomenda_final)==1);


    ficheiro=fopen(num_encomenda_final,"w");
    ficheiro_temp=fopen("recibo.txt","w");
    info_mail=fopen("email.txt","w");
    fprintf(info_mail,email);

    if(roundtrip==1)
    {
    fprintf(ficheiro,"%s \n Recibo do voo:\n Voo de %s a %s: %i %c\n Voo de %s a %s: %i Eur\n Iva Aplicado á Taxa legal de 23%c \nTotal: %i Eur\n",num_encomenda_final_temp,origem,destino,preco_voo_ida,128,destino,origem,preco_voo_volta,37,preco_voo_ida+preco_voo_volta);
    fprintf(ficheiro_temp,"%s \n%s\n Recibo do voo:\n Voo de %s a %s: %i Eur\n Voo de %s a %s: %i Eur\n Iva Aplicado á Taxa legal de 23%c \nTotal: %i Eur\n",num_encomenda_final_temp,email,origem,destino,preco_voo_ida,destino,origem,preco_voo_volta,37,preco_voo_ida+preco_voo_volta);
    }
    else if(roundtrip==0)
    {
    fprintf(ficheiro,"%s \n Recibo do voo:\n Voo de %s a %s: %i Eur\n Iva Aplicado á Taxa legal de 23%c \nTotal: %i Eur\n",num_encomenda_final_temp,origem,destino,preco_voo_ida,37,preco_voo_ida);
    fprintf(ficheiro_temp,"%s \n%s\n Recibo do voo:\n Voo de %s a %s: %i Eur\n Iva Aplicado á Taxa legal de 23%c \n Total: %i Eur\n",num_encomenda_final_temp,email,origem,destino,preco_voo_ida,37,preco_voo_ida);
    }

    fclose(info_mail);
    fclose(ficheiro);
    fclose(ficheiro_temp);
    //system("Python\\emailtest.py");   ///Abre o script de python que envia o email
    ///system("Python\\dist\\mailsender.exe"); ///Abre a app em python que envia o email
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
