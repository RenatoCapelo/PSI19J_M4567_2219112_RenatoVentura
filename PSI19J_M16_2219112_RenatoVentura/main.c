#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define num_encomenda_1 "Passagem numero "
#define num_encomenda_3 ".txt"

int main()
{
    FILE *ficheiro;
    FILE *ficheiro_temp;
    FILE *info_mail;
    char num_encomenda_2[5];
    char num_encomenda_final[25];
    char num_encomenda_final_temp[25];  ///Usada para o fprintf
    char email[255];
    printf("Insira o seu email: ");
    gets(email);

    for(int a=0;a<1;a++)
    {
        strcpy(num_encomenda_final, ""); ///Reseta a string
        sprintf(num_encomenda_2,"%i",a+1); ///Altera o numero de encomenda
        strcat(num_encomenda_final,num_encomenda_1);
        strcat(num_encomenda_final,num_encomenda_2);
        strcpy(num_encomenda_final_temp,num_encomenda_final);
        strcat(num_encomenda_final,num_encomenda_3);


    ficheiro=fopen(num_encomenda_final,"w");
    ficheiro_temp=fopen("recibo.txt","w");
    info_mail=fopen("email.txt","w");
    fprintf(info_mail,email);
    fprintf(ficheiro,"%s \n Recibo do voo:\n Voo de Lisboa a Barcelona: 70 Eur\n Voo de Barcelona a Lisboa: 65 Eur\n Total: 135 Eur\n",num_encomenda_final_temp);
    fprintf(ficheiro_temp,"%s \n%s\n Recibo do voo:\n Voo de Lisboa a Barcelona: 70 Eur\n Voo de Barcelona a Lisboa: 65 Eur\n Total: 135 Eur\n",num_encomenda_final_temp,email);
    fclose(info_mail);
    fclose(ficheiro);
    fclose(ficheiro_temp);
    //system("Python\\emailtest.py");   ///Abre o script de python que envia o email
    system("Python\\dist\\mailsender.exe"); ///Abre a app em python que envia o email
    printf("recibo enviado para o seu email\n");

    }
    return 0;
}
