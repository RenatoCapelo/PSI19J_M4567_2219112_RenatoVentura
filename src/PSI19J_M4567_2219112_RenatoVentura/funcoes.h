#ifndef FUNCOES_H_INCLUDED
#define FUNCOES_H_INCLUDED

#define num_encomenda_1 "Passagem numero "
#define num_encomenda_3 ".txt"

#include <dirent.h>


void hidecursor()  ///NAO SEI O QUE SE PASSA AQUI, S� SEI QUE FUNCEMINA :D, OBRIGADO STACK OVERFLOW!!
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
    int numficheiros=0;
    DIR *dr = opendir(path);

    if (dr == NULL)
    {
        printf("N�o foi possivel abrir o diretorio, por favor contacte o administrador");
        return 0;
    }

        while ((de = readdir(dr)) != NULL)
        {
            if ( !strcmp(de->d_name, ".") || !strcmp(de->d_name, "..") )
            {
                // vai ignorar os ficheiros "." e ".." pois n�o s�o ficheiros mas sim os diretorios "base"
            }
            else
            {
                numficheiros++;
            }
        }
    closedir(dr);
    return numficheiros;
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

#endif // FUNCOES_H_INCLUDED


