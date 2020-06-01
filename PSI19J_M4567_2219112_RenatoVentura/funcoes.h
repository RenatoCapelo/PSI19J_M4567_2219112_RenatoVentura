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
    struct dirent *de;  // Pointer for directory entry
    int numberoffiles=0;
printf("path: %s\n\n",path);
    DIR *dr = opendir(path);

    if (dr == NULL)  // opendir returns NULL if couldn't open directory
    {
        printf("Could not open current directory" );
        return 0;
    }

        // for readdir()
        while ((de = readdir(dr)) != NULL)
        {
            if ( !strcmp(de->d_name, ".") || !strcmp(de->d_name, "..") )
            {
                // do nothing (straight logic)
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


