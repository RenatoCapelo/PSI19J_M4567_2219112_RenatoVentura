#ifndef VENDA_BILHETES_H_INCLUDED
#define VENDA_BILHETES_H_INCLUDED
#include "structures.h"

struct Login login;
struct Dados_voo dados_voo[99];


void ticket_selling()
{

venda_bilhetes: ;

char origin_input[99]="";
char destination_input[99]="";
char filename[99]="";

int a;
int roundtrip;

ticket_selling_layout();

if(login.user_type==0){system("Files\\PDFs\\Paises.pdf");}

gotoxy(30,12);gets(origin_input);
if(strcmpi("login",origin_input)==0)
{
    strcpy(origin_input,login.pais_cliente);
}

strcat(filename,".\\Files\\Paises\\");
strcat(filename,origin_input);
strcat(filename,".txt");

FILE *file = fopen ( filename, "r" );
if ( file != NULL )
{
  system("cls");
  destination_select: ;
  char line [128]="";
  int loop=0;
  printf("\n\n                    Selecione o Destino Pretendido: \n");
  while (fgets ( line, sizeof line, file) != NULL ) /* read a line */
  {
    sscanf(line,"%s %i %i",dados_voo[loop].destino,&dados_voo[loop].precos[0],&dados_voo[loop].precos[1]);
    fflush(stdin);
    for(int letra=0;letra<strlen(dados_voo[loop].destino);letra++)
    {
        if(dados_voo[loop].destino[letra]=='-')
        {
            dados_voo[loop].destino[letra]=' ';
        }
    }
    printf("\ndestino: %s\npreco viagem simples: %i\npreco ida e volta: %i\n\n",dados_voo[loop].destino,dados_voo[loop].precos[0],dados_voo[loop].precos[1]+dados_voo[loop].precos[0]);
    loop++;
  }
  fclose ( file );

    printf("Insira o nome do destino pretendido: ");
    gets(destination_input);
    for(a=0;a<loop;a++)
    {
        if(strcmpi(dados_voo[a].destino,destination_input)==0)
        {
            break;
        }
    }

    if(a>loop-1) //Para caso o for loop nao tenha encontrado correspondencia nos arrays
    {
        printf("Destino Inválido, por favor confira se voamos para esse país ou algum erro ortografico");
        Sleep(1000);
        system("cls");
        goto destination_select;
    }
    else
    {
        system("cls");
        roundtrip=roundtrip_layout(dados_voo[a].destino,dados_voo[a].precos[0],dados_voo[a].precos[1]);
        if(login.user_type==0){recibo(origin_input,dados_voo[a].destino,roundtrip,dados_voo[a].precos[0],dados_voo[a].precos[1],login.email_cliente,login.nif_cliente);}

    }
}
   else
   {
      system("cls");
      printf("Atualmente não voamos a partir desse país, por favor insira de novo o país e/ou verifique se não inseriu acentos ortográficos");
      Sleep(1000);
      system("cls");
      goto venda_bilhetes;
   }

}
#endif // VENDA_BILHETES_H_INCLUDED
