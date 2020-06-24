#ifndef EMAIL_H_INCLUDED
#define EMAIL_H_INCLUDED

void recibo(char origem[255],char destino[255],int roundtrip,float preco_voo_ida,float preco_voo_volta,char email[255],int nif)
{
    FILE *ficheiro;
    FILE *ficheiro_temp;
    FILE *info_mail;
    FILE *encomenda_cliente;
    char num_encomenda_2[11];
    char num_encomenda_final[100];
    char num_encomenda_final_temp[100];  //Usada para o fprintf
    char fnum_encomenda_final[999];      //Usada para abrir o ficheiro
    char fencomenda_cliente[999];        //Usada para o path do ficheiro do cliente que inclui as encomendas
    int increase=1;
    float pre_tax_price;
    float total;


        do{ //Ciclo de repeticao para o nome do proximo recibo nao ser igual a nenhum dos anteriores
        strcpy(num_encomenda_final, ""); //Reseta a string

        sprintf(num_encomenda_2,"%i",increase); //Altera o numero de encomenda
        strcat(num_encomenda_final,num_encomenda_1);
        strcat(num_encomenda_final,num_encomenda_2);
        strcpy(num_encomenda_final_temp,num_encomenda_final);
        strcat(num_encomenda_final,num_encomenda_3);
        strcpy(fnum_encomenda_final," "); //Reseta a string
        sprintf(fnum_encomenda_final,"Files\\Encomendas\\%s",num_encomenda_final);
        increase++;

    }while(exists(fnum_encomenda_final)==1);


    strcpy(fencomenda_cliente,"");
    sprintf(fencomenda_cliente,"Files\\Users\\Encomendas\\%s.txt",email);

    encomenda_cliente=fopen(fencomenda_cliente,"a+");
    fprintf(encomenda_cliente,"%i\n",increase-1);
    fclose(encomenda_cliente);
    ficheiro=fopen(fnum_encomenda_final,"w");
    ficheiro_temp=fopen("Files\\TEMP\\recibo.txt","w");
    info_mail=fopen("Files\\TEMP\\email.txt","w");
    fprintf(info_mail,email);

    total=preco_voo_ida+preco_voo_volta;
    pre_tax_price=total-(total/(1+0.23)*0.23);

    if(roundtrip==1)
    {
    fprintf(ficheiro,"%s \nNIF: %i\nRecibo do voo:\n\n Voo de %s a %s: %.2f EUR\n Voo de %s a %s: %.2f EUR\n\n Iva Aplicado de acordo com a Taxa legal de 23%c \nTotal Sem IVA: %.2f EUR\nTotal: %.2f EUR\n\nPara confirmar a reserva diriga-se a uma das nossa lojas para efetuar o pagamento nos proximos 2 dias uteis",num_encomenda_final_temp,nif,origem,destino,preco_voo_ida,destino,origem,preco_voo_volta,37,pre_tax_price,preco_voo_ida+preco_voo_volta);
    fprintf(ficheiro_temp,"%s \nNIF: %i\nRecibo do voo:\n\n Voo de %s a %s: %.2f EUR\n Voo de %s a %s: %.2f EUR\n\n Iva Aplicado de acordo com a Taxa legal de 23%c \nTotal Sem IVA: %.2f EUR\nTotal: %.2f EUR\n\nPara confirmar a reserva diriga-se a uma das nossa lojas para efetuar o pagamento nos proximos 2 dias uteis",num_encomenda_final_temp,nif,origem,destino,preco_voo_ida,destino,origem,preco_voo_volta,37,pre_tax_price,preco_voo_ida+preco_voo_volta);
    }
    else if(roundtrip==0)
    {
    fprintf(ficheiro,"%s \nNIF: %i\nRecibo do voo:\n\n Voo de %s a %s: %.2f Eur\n\n Iva Aplicado de acordo com a Taxa legal de 23%c \nTotal Sem IVA: %.2f EUR\nTotal: %.2f Eur\n\nPara confirmar a reserva diriga-se a uma das nossa lojas para efetuar o pagamento nos proximos 2 dias uteis",num_encomenda_final_temp,nif,origem,destino,preco_voo_ida,37,pre_tax_price,preco_voo_ida);
    fprintf(ficheiro_temp,"%s \nNIF: %i\nRecibo do voo:\n\n Voo de %s a %s: %.2f Eur\n\n Iva Aplicado de acordo com a Taxa legal de 23%c \nTotal Sem IVA: %.2f EUR\n Total: %.2f Eur\n\nPara confirmar a reserva diriga-se a uma das nossa lojas para efetuar o pagamento nos proximos 2 dias uteis",num_encomenda_final_temp,nif,origem,destino,preco_voo_ida,37,pre_tax_price,preco_voo_ida);
    }

    fclose(info_mail);
    fclose(ficheiro);
    fclose(ficheiro_temp);

    char text[255];
    strcpy(text,"Estamos a enviar o seu recibo, por favor aguarde :D");
    for(int a=0;a<strlen(text);a++)
    {
        if(text[a]==' ')
        {
        printf("%c",text[a]);
        }
        else
        {
        printf("%c",text[a]);
        Sleep(100);
        }

    }
    printf("\n\n");

    //system("Python\\mailsender.py");      ///Abre o script de python que envia o email
    system("Python\\dist\\mailsender.exe"); ///Abre a app em python que envia o email
    printf("\nrecibo enviado para o seu email\n");

    system("pause");

}

#endif // EMAIL_H_INCLUDED
