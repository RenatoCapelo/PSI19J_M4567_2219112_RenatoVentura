#ifndef HORARIOS_H_INCLUDED
#define HORARIOS_H_INCLUDED
#include "structures.h"

struct Login login;
struct Dados_voo dados_voo[99];

void horarios()
{
    char horario[99][24][2];
    char origem[99];
    char filename_1[99];
    char filename_2[99];
    char path[255];
    char line  [128]="";
    char line_2[255]="";
    int loop=0;

    struct tm *data_hora_atual;
    time_t segundos;
    time(&segundos);
    data_hora_atual = localtime(&segundos);

  int start=data_hora_atual->tm_hour;
  int finish=start+3;


    printf("Insira o Pais para o qual deseja consultar os horarios: ");
    gets(origem);
    strcat(path,"./Files/Voos/");
    strcat(path,origem);

    DIR *dr = opendir(path);    //Utilização da biblioteca dirent.h, define qual o diretorio pretendido.

    if (dr == NULL)  // Irá retornar NULL caso não seja possivel abrir o diretorio
    {
        printf("Não temos atualmente os horarios para esse país, por favor contacte o administrador.\n\n");
        sleep(2);
        return;
    }
    else{


  system("cls");

  puts("\n\n                            Em baixo seguem os voos das proximas 3 horas do aeroporto selecionado");

  strcpy(filename_1,path);
  strcpy(filename_2,path);

  strcat(filename_1,"/");
  strcat(filename_2,"/");

  strcat(filename_1,"partidas.txt");
  strcat(filename_2,"chegadas.txt");




  FILE *partidas=fopen(filename_1,"r");

  while (fgets ( line, sizeof line,partidas) != NULL )
  {
    sscanf(line,"%s",horario[loop][0]);
    fflush(stdin);
    loop++;
  }

  fclose (partidas);
puts("\n\n    Partidas:\n");
  for(int a=start;a<finish;a++){
        switch(a){
            case 24:
                    printf("        %s 00:00\n",horario[0][0]);
                    break;
            case 25:
                    printf("        %s 01:00\n",horario[1][0]);
                    break;
            default:
                if(a<10){
                    printf("        %s 0%i:00\n",horario[a][0],a);
                    }
                else{
                    printf("        %s %i:00\n",horario[a][0],a);
                }
                    break;
        }
  }
    FILE *chegadas=fopen(filename_2,"r");

    loop=0;
puts("\n\n\n    Chegadas\n");
while (fgets ( line_2, sizeof line_2,chegadas) != NULL )
  {
    sscanf(line_2,"%s",horario[loop][1]);
    fflush(stdin);
    loop++;
  }
  fclose (chegadas);
  fflush(stdin);


  for(int b=start;b<finish;b++){
        switch(b){
            case 24:
                    printf("        %s 00:00\n",horario[0][1]);
                    break;
            case 25:
                    printf("        %s 01:00\n",horario[1][1]);
                    break;
            default:
                if(b<10){
                    printf("        %s 0%i:00\n",horario[b][1],b);
                    }
                else{
                    printf("        %s %i:00\n",horario[b][1],b);
                }
                    break;
        }
  }

    }
puts("\n\n\n                      Pressione qualquer tecla para voltar ao menu");
getch();
    return;
}

#endif // HORARIOS_H_INCLUDED
