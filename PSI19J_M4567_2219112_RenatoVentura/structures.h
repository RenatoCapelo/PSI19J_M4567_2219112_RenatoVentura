#ifndef STRUCTURES_H_INCLUDED
#define STRUCTURES_H_INCLUDED

struct Login{
    int user_type;
    int num_cliente;
    int milhas_atuais;
    int milhas_totais;
    char nome1_cliente[255];
    char nome2_cliente[255];
    char email_cliente[255];
    char pais_cliente[255];
    int nif_cliente;
};

struct Dados_voo{

char destino[99];
char codigos[4][2]; //ICAO 3 char E IATA 4char
int  oneway;
int  roundtrip;
int  miles;
};

struct user_input
{
    char a[99];
    char b[99];
    char c[99];
};


#endif // STRUCTURES_H_INCLUDED
