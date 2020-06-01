#ifndef EMAIL_H_INCLUDED
#define EMAIL_H_INCLUDED

void recibo(char origem[255],char destino[255],int roundtrip,float preco_voo_ida,float preco_voo_volta,char email[255])
{
    FILE *ficheiro;
    FILE *ficheiro_temp;
    FILE *info_mail;
    char num_encomenda_2[11];
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
    fprintf(ficheiro,"%s \n Recibo do voo:\n Voo de %s a %s: %.2f Eur\n Iva Aplicado de acordo com a Taxa legal de 23%c \nTotal: %.2f Eur\n",num_encomenda_final_temp,origem,destino,preco_voo_ida,37,preco_voo_ida);
    fprintf(ficheiro_temp,"%s \n%s\n Recibo do voo:\n Voo de %s a %s: %.2f Eur\n Iva Aplicado de acordo com a Taxa legal de 23%c \n Total: %.2f Eur\n",num_encomenda_final_temp,email,origem,destino,preco_voo_ida,37,preco_voo_ida);
    }

    fclose(info_mail);
    fclose(ficheiro);
    fclose(ficheiro_temp);
    //system("Python\\mailsender.py");      ///Abre o script de python que envia o email
    system("Python\\dist\\mailsender.exe"); ///Abre a app em python que envia o email
    printf("recibo enviado para o seu email\n");
system("pause");

}

#endif // EMAIL_H_INCLUDED
