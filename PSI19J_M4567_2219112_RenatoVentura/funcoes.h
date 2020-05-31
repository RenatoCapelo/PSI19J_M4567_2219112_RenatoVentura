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
    struct dirent *de;  // Pointer para o diretorio
    int numberoffiles=0;
    DIR *dr = opendir(path);

    if (dr == NULL)  // Irá retornar NULL caso não seja possivel abrir o diretorio
    {
        printf("Could not open current directory" );
        return 0;
    }

        while ((de = readdir(dr)) != NULL)
        {
            if ( !strcmp(de->d_name, ".") || !strcmp(de->d_name, "..") )
            {
                // vai ignorar os ficheiros "." e ".." pois não são ficheiros mas sim diretorio
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


