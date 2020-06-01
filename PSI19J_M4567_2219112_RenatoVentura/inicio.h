#ifndef INICIO_H_INCLUDED
#define INICIO_H_INCLUDED

int first_layout()
{
int option=1;
char getcharacter;
    //ponteiro para struct que armazena data e hora
    struct tm *data_hora_atual;

  //variável do tipo time_t para armazenar o tempo em segundos
    time_t segundos;
    while(1)
    {
      //obtendo o tempo em segundos
      time(&segundos);

       //para converter de segundos para o tempo local
    data_hora_atual = localtime(&segundos);


    if(option==1){
        while(!kbhit()){
        time(&segundos);data_hora_atual = localtime(&segundos);
    hidecursor(); ///Caso esta função não seja chamada. O cursor irá ficar "maluco" a percorrer todas as linhas da consola pois não tem tempo para chegar ao fim antes do reinicio
    gotoxy(2,1);printf("   _____________________________________________________________________________________________________________");
    gotoxy(2,2);printf("  /                                            ");textcolor(LIGHTGREEN);printf(".......");textcolor(GREEN+BLINK);printf(",,,..."); textcolor(RED);printf("/*******");textcolor(WHITE);printf("                                            \\");
    gotoxy(2,3);printf(" /                                             ");textcolor(LIGHTGREEN);printf(",,,,,,,");textcolor(GREEN+BLINK);printf("///");textcolor(LIGHTGREEN);printf("*,,"); textcolor(RED);printf("###########(");textcolor(WHITE);printf("                                         \\");
    gotoxy(2,4);printf("|                                                 ");textcolor(LIGHTGREEN);printf(",,,");textcolor(GREEN+BLINK);printf("/*");textcolor(LIGHTGREEN);printf(",, ,,"); textcolor(RED);printf("####.   ####");textcolor(WHITE);printf("                                          |");
    gotoxy(2,5);printf("|                                                 ");textcolor(LIGHTGREEN);printf(",,*");textcolor(GREEN+BLINK);printf("/*");textcolor(LIGHTGREEN);printf(",, ,,"); textcolor(RED);printf("############");textcolor(WHITE);printf("                                          |");
    gotoxy(2,6);printf("|                                                 ");textcolor(LIGHTGREEN);printf(",,");textcolor(GREEN+BLINK);printf("//*");textcolor(LIGHTGREEN);printf(",,,,,"); textcolor(RED);printf("#########");textcolor(WHITE);printf("                                             |");
    gotoxy(2,7);printf("|                                                 ");textcolor(LIGHTGREEN);printf(",");textcolor(GREEN+BLINK);printf("///*");textcolor(LIGHTGREEN);printf("     "); textcolor(RED);printf("####,");textcolor(WHITE);printf("                                                 |");
    gotoxy(2,8);printf("|-----------------------------------------------------------------------------------------------------------------|");
    gotoxy(2,9);printf("|                                                                                                                 |");
    gotoxy(2,10);printf(" ");gotoxy(25,10);printf("                     São %i:%i:%i do dia %i/%i/%i                                          ",data_hora_atual->tm_hour,data_hora_atual->tm_min,data_hora_atual->tm_sec,data_hora_atual->tm_mday,data_hora_atual->tm_mon+1,data_hora_atual->tm_year+1900);
    gotoxy(2,11);printf("|");     gotoxy(25,11);    puts(" _________________________________________________________________                         |");
    gotoxy(2,12);printf("|");     gotoxy(25,12);    puts("/-----------------------------------------------------------------\\                        |");
    gotoxy(2,13);printf("|");     gotoxy(25,13);    puts("*                                                                 *                        |");
    gotoxy(2,14);printf("|");     gotoxy(25,14);    puts("*                                                                 *                        |");
    gotoxy(2,15);printf("|");     gotoxy(25,15);  printf("*                            ");textbackground(LIGHTBLUE);printf(" Login ");textbackground(BLACK);printf("                              *                        |");
    gotoxy(2,16);printf("|");     gotoxy(25,16);    puts("*                                                                 *                        |");
    gotoxy(2,17);printf("|");     gotoxy(25,17);  printf("*                            Sign Up                              *                        |");
    gotoxy(2,18);printf("|");     gotoxy(25,18);    puts("*                                                                 *                        |");
    gotoxy(2,19);printf("|");     gotoxy(25,19);    puts("*                   Ver o Manual do Utilizador                    *                        |");
    gotoxy(2,20);printf("|");     gotoxy(25,20);    puts("*                                                                 *                        |");
    gotoxy(2,21);printf("|");     gotoxy(25,21);  printf("*                             Sair                                *                        |");
    gotoxy(2,22);printf("|");     gotoxy(25,22);    puts("*                                                                 *                        |");
    gotoxy(2,23);printf("|");     gotoxy(25,23);    puts("\\_________________________________________________________________/                        |");
    gotoxy(2,24);printf("|                                                                                                                 |\n");
    gotoxy(2,25);printf("|                                                                                                                 |\n");
    gotoxy(2,26);printf(" |                                                                                                                 |\n");
    gotoxy(2,27);printf("  \\                                                                                                               /\n");
    gotoxy(2,28);printf("   \\_____________________________________________________________________________________________________________/");
       time(&segundos);data_hora_atual = localtime(&segundos);
        }
    }
    else if(option==2)
    {
        while(!kbhit()){
        time(&segundos);data_hora_atual = localtime(&segundos);
    hidecursor(); ///Caso esta função não seja chamada. O cursor irá ficar "maluco" a percorrer todas as linhas da consola pois não tem tempo para chegar ao fim antes do reinicio
    gotoxy(2,1);printf("   _____________________________________________________________________________________________________________");
    gotoxy(2,2);printf("  /                                            ");textcolor(LIGHTGREEN);printf(".......");textcolor(GREEN+BLINK);printf(",,,..."); textcolor(RED);printf("/*******");textcolor(WHITE);printf("                                            \\");
    gotoxy(2,3);printf(" /                                             ");textcolor(LIGHTGREEN);printf(",,,,,,,");textcolor(GREEN+BLINK);printf("///");textcolor(LIGHTGREEN);printf("*,,"); textcolor(RED);printf("###########(");textcolor(WHITE);printf("                                         \\");
    gotoxy(2,4);printf("|                                                 ");textcolor(LIGHTGREEN);printf(",,,");textcolor(GREEN+BLINK);printf("/*");textcolor(LIGHTGREEN);printf(",, ,,"); textcolor(RED);printf("####.   ####");textcolor(WHITE);printf("                                          |");
    gotoxy(2,5);printf("|                                                 ");textcolor(LIGHTGREEN);printf(",,*");textcolor(GREEN+BLINK);printf("/*");textcolor(LIGHTGREEN);printf(",, ,,"); textcolor(RED);printf("############");textcolor(WHITE);printf("                                          |");
    gotoxy(2,6);printf("|                                                 ");textcolor(LIGHTGREEN);printf(",,");textcolor(GREEN+BLINK);printf("//*");textcolor(LIGHTGREEN);printf(",,,,,"); textcolor(RED);printf("#########");textcolor(WHITE);printf("                                             |");
    gotoxy(2,7);printf("|                                                 ");textcolor(LIGHTGREEN);printf(",");textcolor(GREEN+BLINK);printf("///*");textcolor(LIGHTGREEN);printf("     "); textcolor(RED);printf("####,");textcolor(WHITE);printf("                                                 |");
    gotoxy(2,8);printf("|-----------------------------------------------------------------------------------------------------------------|");
    gotoxy(2,9);printf("|                                                                                                                 |");
    gotoxy(2,10);printf(" ");gotoxy(25,10);printf("                     São %i:%i:%i do dia %i/%i/%i                                          ",data_hora_atual->tm_hour,data_hora_atual->tm_min,data_hora_atual->tm_sec,data_hora_atual->tm_mday,data_hora_atual->tm_mon+1,data_hora_atual->tm_year+1900);
    gotoxy(2,11);printf("|");     gotoxy(25,11);    puts(" _________________________________________________________________                         |");
    gotoxy(2,12);printf("|");     gotoxy(25,12);    puts("/-----------------------------------------------------------------\\                        |");
    gotoxy(2,13);printf("|");     gotoxy(25,13);    puts("*                                                                 *                        |");
    gotoxy(2,14);printf("|");     gotoxy(25,14);    puts("*                                                                 *                        |");
    gotoxy(2,15);printf("|");     gotoxy(25,15);  printf("*                             Login                               *                        |");
    gotoxy(2,16);printf("|");     gotoxy(25,16);    puts("*                                                                 *                        |");
    gotoxy(2,17);printf("|");     gotoxy(25,17);  printf("*                           ");textbackground(LIGHTBLUE);printf(" Sign Up ");textbackground(BLACK);printf("                             *                        |");
    gotoxy(2,18);printf("|");     gotoxy(25,18);    puts("*                                                                 *                        |");
    gotoxy(2,19);printf("|");     gotoxy(25,19);    puts("*                   Ver o Manual do Utilizador                    *                        |");
    gotoxy(2,20);printf("|");     gotoxy(25,20);    puts("*                                                                 *                        |");
    gotoxy(2,21);printf("|");     gotoxy(25,21);  printf("*                             Sair                                *                        |");
    gotoxy(2,22);printf("|");     gotoxy(25,22);    puts("*                                                                 *                        |");
    gotoxy(2,23);printf("|");     gotoxy(25,23);    puts("\\_________________________________________________________________/                        |");
    gotoxy(2,24);printf("|                                                                                                                 |\n");
    gotoxy(2,25);printf("|                                                                                                                 |\n");
    gotoxy(2,26);printf(" |                                                                                                                 |\n");
    gotoxy(2,27);printf("  \\                                                                                                               /\n");
    gotoxy(2,28);printf("   \\_____________________________________________________________________________________________________________/");
       time(&segundos);data_hora_atual = localtime(&segundos);
    }
    }
    else if(option==3)
    {
        while(!kbhit()){
        time(&segundos);data_hora_atual = localtime(&segundos);
    //hidecursor(); ///Caso esta função não seja chamada. O cursor irá ficar "maluco" a percorrer todas as linhas da consola pois não tem tempo para chegar ao fim antes do reinicio
    gotoxy(2,1);printf("   _____________________________________________________________________________________________________________");
    gotoxy(2,2);printf("  /                                            ");textcolor(LIGHTGREEN);printf(".......");textcolor(GREEN+BLINK);printf(",,,..."); textcolor(RED);printf("/*******");textcolor(WHITE);printf("                                            \\");
    gotoxy(2,3);printf(" /                                             ");textcolor(LIGHTGREEN);printf(",,,,,,,");textcolor(GREEN+BLINK);printf("///");textcolor(LIGHTGREEN);printf("*,,"); textcolor(RED);printf("###########(");textcolor(WHITE);printf("                                         \\");
    gotoxy(2,4);printf("|                                                 ");textcolor(LIGHTGREEN);printf(",,,");textcolor(GREEN+BLINK);printf("/*");textcolor(LIGHTGREEN);printf(",, ,,"); textcolor(RED);printf("####.   ####");textcolor(WHITE);printf("                                          |");
    gotoxy(2,5);printf("|                                                 ");textcolor(LIGHTGREEN);printf(",,*");textcolor(GREEN+BLINK);printf("/*");textcolor(LIGHTGREEN);printf(",, ,,"); textcolor(RED);printf("############");textcolor(WHITE);printf("                                          |");
    gotoxy(2,6);printf("|                                                 ");textcolor(LIGHTGREEN);printf(",,");textcolor(GREEN+BLINK);printf("//*");textcolor(LIGHTGREEN);printf(",,,,,"); textcolor(RED);printf("#########");textcolor(WHITE);printf("                                             |");
    gotoxy(2,7);printf("|                                                 ");textcolor(LIGHTGREEN);printf(",");textcolor(GREEN+BLINK);printf("///*");textcolor(LIGHTGREEN);printf("     "); textcolor(RED);printf("####,");textcolor(WHITE);printf("                                                 |");
    gotoxy(2,8);printf("|-----------------------------------------------------------------------------------------------------------------|");
    gotoxy(2,9);printf("|                                                                                                                 |");
    gotoxy(2,10);printf(" ");gotoxy(25,10);printf("                     São %i:%i:%i do dia %i/%i/%i                                          ",data_hora_atual->tm_hour,data_hora_atual->tm_min,data_hora_atual->tm_sec,data_hora_atual->tm_mday,data_hora_atual->tm_mon+1,data_hora_atual->tm_year+1900);
    gotoxy(2,11);printf("|");     gotoxy(25,11);    puts(" _________________________________________________________________                         |");
    gotoxy(2,12);printf("|");     gotoxy(25,12);    puts("/-----------------------------------------------------------------\\                        |");
    gotoxy(2,13);printf("|");     gotoxy(25,13);    puts("*                                                                 *                        |");
    gotoxy(2,14);printf("|");     gotoxy(25,14);    puts("*                                                                 *                        |");
    gotoxy(2,15);printf("|");     gotoxy(25,15);  printf("*                             Login                               *                        |");
    gotoxy(2,16);printf("|");     gotoxy(25,16);    puts("*                                                                 *                        |");
    gotoxy(2,17);printf("|");     gotoxy(25,17);  printf("*                            Sign Up                              *                        |");
    gotoxy(2,18);printf("|");     gotoxy(25,18);    puts("*                                                                 *                        |");
    gotoxy(2,19);printf("|");     gotoxy(25,19);    printf("*                  ");textbackground(LIGHTBLUE);printf(" Ver o Manual do Utilizador ");textbackground(BLACK);printf("                   *                        |");
    gotoxy(2,20);printf("|");     gotoxy(25,20);    puts("*                                                                 *                        |");
    gotoxy(2,21);printf("|");     gotoxy(25,21);  printf("*                             Sair                                *                        |");
    gotoxy(2,22);printf("|");     gotoxy(25,22);    puts("*                                                                 *                        |");
    gotoxy(2,23);printf("|");     gotoxy(25,23);    puts("\\_________________________________________________________________/                        |");
    gotoxy(2,24);printf("|                                                                                                                 |\n");
    gotoxy(2,25);printf("|                                                                                                                 |\n");
    gotoxy(2,26);printf(" |                                                                                                                 |\n");
    gotoxy(2,27);printf("  \\                                                                                                               /\n");
    gotoxy(2,28);printf("   \\_____________________________________________________________________________________________________________/");
       time(&segundos);data_hora_atual = localtime(&segundos);
        }
    }

    else if(option==4)
    {
        while(!kbhit()){
        time(&segundos);data_hora_atual = localtime(&segundos);
    //hidecursor(); ///Caso esta função não seja chamada. O cursor irá ficar "maluco" a percorrer todas as linhas da consola pois não tem tempo para chegar ao fim antes do reinicio
    gotoxy(2,1);printf("   _____________________________________________________________________________________________________________");
    gotoxy(2,2);printf("  /                                            ");textcolor(LIGHTGREEN);printf(".......");textcolor(GREEN+BLINK);printf(",,,..."); textcolor(RED);printf("/*******");textcolor(WHITE);printf("                                            \\");
    gotoxy(2,3);printf(" /                                             ");textcolor(LIGHTGREEN);printf(",,,,,,,");textcolor(GREEN+BLINK);printf("///");textcolor(LIGHTGREEN);printf("*,,"); textcolor(RED);printf("###########(");textcolor(WHITE);printf("                                         \\");
    gotoxy(2,4);printf("|                                                 ");textcolor(LIGHTGREEN);printf(",,,");textcolor(GREEN+BLINK);printf("/*");textcolor(LIGHTGREEN);printf(",, ,,"); textcolor(RED);printf("####.   ####");textcolor(WHITE);printf("                                          |");
    gotoxy(2,5);printf("|                                                 ");textcolor(LIGHTGREEN);printf(",,*");textcolor(GREEN+BLINK);printf("/*");textcolor(LIGHTGREEN);printf(",, ,,"); textcolor(RED);printf("############");textcolor(WHITE);printf("                                          |");
    gotoxy(2,6);printf("|                                                 ");textcolor(LIGHTGREEN);printf(",,");textcolor(GREEN+BLINK);printf("//*");textcolor(LIGHTGREEN);printf(",,,,,"); textcolor(RED);printf("#########");textcolor(WHITE);printf("                                             |");
    gotoxy(2,7);printf("|                                                 ");textcolor(LIGHTGREEN);printf(",");textcolor(GREEN+BLINK);printf("///*");textcolor(LIGHTGREEN);printf("     "); textcolor(RED);printf("####,");textcolor(WHITE);printf("                                                 |");
    gotoxy(2,8);printf("|-----------------------------------------------------------------------------------------------------------------|");
    gotoxy(2,9);printf("|                                                                                                                 |");
    gotoxy(2,10);printf(" ");gotoxy(25,10);printf("                     São %i:%i:%i do dia %i/%i/%i                                          ",data_hora_atual->tm_hour,data_hora_atual->tm_min,data_hora_atual->tm_sec,data_hora_atual->tm_mday,data_hora_atual->tm_mon+1,data_hora_atual->tm_year+1900);
    gotoxy(2,11);printf("|");     gotoxy(25,11);    puts(" _________________________________________________________________                         |");
    gotoxy(2,12);printf("|");     gotoxy(25,12);    puts("/-----------------------------------------------------------------\\                        |");
    gotoxy(2,13);printf("|");     gotoxy(25,13);    puts("*                                                                 *                        |");
    gotoxy(2,14);printf("|");     gotoxy(25,14);    puts("*                                                                 *                        |");
    gotoxy(2,15);printf("|");     gotoxy(25,15);  printf("*                             Login                               *                        |");
    gotoxy(2,16);printf("|");     gotoxy(25,16);    puts("*                                                                 *                        |");
    gotoxy(2,17);printf("|");     gotoxy(25,17);  printf("*                            Sign Up                              *                        |");
    gotoxy(2,18);printf("|");     gotoxy(25,18);    puts("*                                                                 *                        |");
    gotoxy(2,19);printf("|");     gotoxy(25,19);   printf("*                   Ver o Manual do Utilizador                    *                        |");
    gotoxy(2,20);printf("|");     gotoxy(25,20);    puts("*                                                                 *                        |");
    gotoxy(2,21);printf("|");     gotoxy(25,21);  printf("*                            ");textbackground(LIGHTBLUE);printf(" Sair ");textbackground(BLACK);printf("                               *                        |");
    gotoxy(2,22);printf("|");     gotoxy(25,22);    puts("*                                                                 *                        |");
    gotoxy(2,23);printf("|");     gotoxy(25,23);    puts("\\_________________________________________________________________/                        |");
    gotoxy(2,24);printf("|                                                                                                                 |\n");
    gotoxy(2,25);printf("|                                                                                                                 |\n");
    gotoxy(2,26);printf(" |                                                                                                                 |\n");
    gotoxy(2,27);printf("  \\                                                                                                               /\n");
    gotoxy(2,28);printf("   \\_____________________________________________________________________________________________________________/");
       time(&segundos);data_hora_atual = localtime(&segundos);
        }
    }
    getcharacter=getch();
    if(getcharacter =='s'||getcharacter =='S')
    {
        if(option>=4)
        {
            option=4;
        }
        if(option<4)
        {
            option++;system("cls");
        }
        else{}
    }

    else if(getcharacter == 'w' || getcharacter =='W')
    {
        if(option<=1)
        {
            option=1;
        }
        if(option>1)
        {
            option--;system("cls");
        }
    }

    else if(getcharacter == '\r')
    {
        system("cls");
        return option;
    }

    else
    {
        option=option;
    }

    }
}

#endif // INICIO_H_INCLUDED
