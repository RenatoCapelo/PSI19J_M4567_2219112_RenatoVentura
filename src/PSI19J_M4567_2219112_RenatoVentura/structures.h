#ifndef STRUCTURES_H_INCLUDED
#define STRUCTURES_H_INCLUDED

struct Login{
    int user_type;
    int num_cliente;
    char nome1_cliente[255];
    char nome2_cliente[255];
    char email_cliente[255];
    char pais_cliente[255];
    char encrypted_password[255];
    int nif_cliente;
};

struct Dados_voo{

char destino[99];
int  precos[2];
};



#endif // STRUCTURES_H_INCLUDED
