#ifndef LAYOUTS_H_INCLUDED
#define LAYOUTS_H_INCLUDED

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
    hidecursor(); //Caso esta função não seja chamada. O cursor irá ficar "maluco" a percorrer todas as linhas da consola pois não tem tempo para chegar ao fim antes do reinicio
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
    hidecursor(); //Caso esta função não seja chamada. O cursor irá ficar "maluco" a percorrer todas as linhas da consola pois não tem tempo para chegar ao fim antes do reinicio
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

int secondlayout()
{

    system("cls");
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



    if(option==1)
    {
        while(!kbhit()){
        time(&segundos);data_hora_atual = localtime(&segundos);
        textbackground(BLACK);
        gotoxy(2,1);printf("   _____________________________________________________________________________________________________________");
        gotoxy(2,2);printf("  /                                                                                                             \\");
        gotoxy(2,3);printf(" /                                                                                                               \\");
        gotoxy(2,4);printf("|                                                                                                                 |");
                                                    gotoxy(45,5);printf("São %i:%i:%i do dia %i/%i/%i",data_hora_atual->tm_hour,data_hora_atual->tm_min,data_hora_atual->tm_sec,data_hora_atual->tm_mday,data_hora_atual->tm_mon+1,data_hora_atual->tm_year+1900);
        gotoxy(2,6);printf("|-----------------------------------------------------------------------------------------------------------------|");
        gotoxy(2,7);printf("|                                                                                                                 |");
        gotoxy(2,8);printf("|                                                                                                                 |");
        gotoxy(2,9);printf("|                                                                                                                 |");
       gotoxy(2,10);printf("|                                              ");textbackground(LIGHTBLUE);printf(" Comprar Bilhetes ");textbackground(BLACK);printf("                                                 |");
       gotoxy(2,11);printf("|                                                                                                                 |");
       gotoxy(2,12);printf("|                                              Consultar Horarios                                                 |");
       gotoxy(2,13);printf("|                                                                                                                 |");
       gotoxy(2,14);printf("|                                              Consultar Reservas                                                 |");
       gotoxy(2,15);printf("|                                                                                                                 |");
       gotoxy(2,16);printf("|                                                 O Meu Perfil                                                    |");
       gotoxy(2,17);printf("|                                                                                                                 |");
       gotoxy(2,18);printf("|                                               Terminar  Sessão                                                  |");
       gotoxy(2,19);printf("|                                                                                                                 |");
       gotoxy(2,20);printf("|                                                     Sair                                                        |");
       gotoxy(2,21);printf("|                                                                                                                 |");
       gotoxy(2,22);printf("|                                                                                                                 |");
       gotoxy(2,23);printf("|                                                                                                                 |");
       gotoxy(2,24);printf("|                                                                                                                 |");
       gotoxy(2,25);printf("|                                                                                                                 |\n ");
       gotoxy(2,26);printf("|                                                                                                                 |\n");
    gotoxy(2,27);printf("  \\                                                                                                               /\n");
    gotoxy(2,28);printf("   \\_____________________________________________________________________________________________________________/");
        }

    }
    else if(option==2)
    {
        while(!kbhit()){
        time(&segundos);data_hora_atual = localtime(&segundos);
        gotoxy(2,1);printf("   _____________________________________________________________________________________________________________");
        gotoxy(2,2);printf("  /                                                                                                             \\");
        gotoxy(2,3);printf(" /                                                                                                               \\");
        gotoxy(2,4);printf("|                                                                                                                 |");
                                                    gotoxy(45,5);printf("São %i:%i:%i do dia %i/%i/%i",data_hora_atual->tm_hour,data_hora_atual->tm_min,data_hora_atual->tm_sec,data_hora_atual->tm_mday,data_hora_atual->tm_mon+1,data_hora_atual->tm_year+1900);
        gotoxy(2,6);printf("|-----------------------------------------------------------------------------------------------------------------|");
        gotoxy(2,7);printf("|                                                                                                                 |");
        gotoxy(2,8);printf("|                                                                                                                 |");
        gotoxy(2,9);printf("|                                                                                                                 |");
       gotoxy(2,10);printf("|                                               Comprar Bilhetes                                                  |");
       gotoxy(2,11);printf("|                                                                                                                 |");
       gotoxy(2,12);printf("|                                             ");textbackground(LIGHTBLUE);printf(" Consultar Horarios ");textbackground(BLACK);printf("                                                |");
       gotoxy(2,13);printf("|                                                                                                                 |");
       gotoxy(2,14);printf("|                                              Consultar Reservas                                                 |");
       gotoxy(2,15);printf("|                                                                                                                 |");
       gotoxy(2,16);printf("|                                                 O Meu Perfil                                                    |");
       gotoxy(2,17);printf("|                                                                                                                 |");
       gotoxy(2,18);printf("|                                               Terminar  Sessão                                                  |");
       gotoxy(2,19);printf("|                                                                                                                 |");
       gotoxy(2,20);printf("|                                                     Sair                                                        |");
       gotoxy(2,21);printf("|                                                                                                                 |");
       gotoxy(2,22);printf("|                                                                                                                 |");
       gotoxy(2,23);printf("|                                                                                                                 |");
       gotoxy(2,24);printf("|                                                                                                                 |");
       gotoxy(2,25);printf("|                                                                                                                 |\n ");
       gotoxy(2,26);printf("|                                                                                                                 |\n");
    gotoxy(2,27);printf("  \\                                                                                                               /\n");
    gotoxy(2,28);printf("   \\_____________________________________________________________________________________________________________/");
        }
    }
    else if(option==3)
    {
        while(!kbhit()){
                    time(&segundos);data_hora_atual = localtime(&segundos);
        gotoxy(2,1);printf("   _____________________________________________________________________________________________________________");
        gotoxy(2,2);printf("  /                                                                                                             \\");
        gotoxy(2,3);printf(" /                                                                                                               \\");
        gotoxy(2,4);printf("|                                                                                                                 |");
                                                    gotoxy(45,5);printf("São %i:%i:%i do dia %i/%i/%i",data_hora_atual->tm_hour,data_hora_atual->tm_min,data_hora_atual->tm_sec,data_hora_atual->tm_mday,data_hora_atual->tm_mon+1,data_hora_atual->tm_year+1900);
        gotoxy(2,6);printf("|-----------------------------------------------------------------------------------------------------------------|");
        gotoxy(2,7);printf("|                                                                                                                 |");
        gotoxy(2,8);printf("|                                                                                                                 |");
        gotoxy(2,9);printf("|                                                                                                                 |");
       gotoxy(2,10);printf("|                                               Comprar Bilhetes                                                  |");
       gotoxy(2,11);printf("|                                                                                                                 |");
       gotoxy(2,12);printf("|                                              Consultar Horarios                                                 |");
       gotoxy(2,13);printf("|                                                                                                                 |");
       gotoxy(2,14);printf("|                                             ");textbackground(LIGHTBLUE);printf(" Consultar Reservas ");textbackground(BLACK);printf("                                                |");
       gotoxy(2,15);printf("|                                                                                                                 |");
       gotoxy(2,16);printf("|                                                 O Meu Perfil                                                    |");
       gotoxy(2,17);printf("|                                                                                                                 |");
       gotoxy(2,18);printf("|                                               Terminar  Sessão                                                  |");
       gotoxy(2,19);printf("|                                                                                                                 |");
       gotoxy(2,20);printf("|                                                     Sair                                                        |");
       gotoxy(2,21);printf("|                                                                                                                 |");
       gotoxy(2,22);printf("|                                                                                                                 |");
       gotoxy(2,23);printf("|                                                                                                                 |");
       gotoxy(2,24);printf("|                                                                                                                 |");
       gotoxy(2,25);printf("|                                                                                                                 |\n ");
       gotoxy(2,26);printf("|                                                                                                                 |\n");
    gotoxy(2,27);printf("  \\                                                                                                               /\n");
    gotoxy(2,28);printf("   \\_____________________________________________________________________________________________________________/");
    }
    }
    else if(option==4)
    {
        while(!kbhit()){
                        time(&segundos);data_hora_atual = localtime(&segundos);
        gotoxy(2,1);printf("   _____________________________________________________________________________________________________________");
        gotoxy(2,2);printf("  /                                                                                                             \\");
        gotoxy(2,3);printf(" /                                                                                                               \\");
        gotoxy(2,4);printf("|                                                                                                                 |");
                                                    gotoxy(45,5);printf("São %i:%i:%i do dia %i/%i/%i",data_hora_atual->tm_hour,data_hora_atual->tm_min,data_hora_atual->tm_sec,data_hora_atual->tm_mday,data_hora_atual->tm_mon+1,data_hora_atual->tm_year+1900);
        gotoxy(2,6);printf("|-----------------------------------------------------------------------------------------------------------------|");
        gotoxy(2,7);printf("|                                                                                                                 |");
        gotoxy(2,8);printf("|                                                                                                                 |");
        gotoxy(2,9);printf("|                                                                                                                 |");
       gotoxy(2,10);printf("|                                               Comprar Bilhetes                                                  |");
       gotoxy(2,11);printf("|                                                                                                                 |");
       gotoxy(2,12);printf("|                                              Consultar Horarios                                                 |");
       gotoxy(2,13);printf("|                                                                                                                 |");
       gotoxy(2,14);printf("|                                              Consultar Reservas                                                 |");
       gotoxy(2,15);printf("|                                                                                                                 |");
       gotoxy(2,16);printf("|                                                ");textbackground(LIGHTBLUE);printf(" O Meu Perfil ");textbackground(BLACK);printf("                                                   |");
       gotoxy(2,17);printf("|                                                                                                                 |");
       gotoxy(2,18);printf("|                                               Terminar  Sessão                                                  |");
       gotoxy(2,19);printf("|                                                                                                                 |");
       gotoxy(2,20);printf("|                                                     Sair                                                        |");
       gotoxy(2,21);printf("|                                                                                                                 |");
       gotoxy(2,22);printf("|                                                                                                                 |");
       gotoxy(2,23);printf("|                                                                                                                 |");
       gotoxy(2,24);printf("|                                                                                                                 |");
       gotoxy(2,25);printf("|                                                                                                                 |\n ");
       gotoxy(2,26);printf("|                                                                                                                 |\n");
    gotoxy(2,27);printf("  \\                                                                                                               /\n");
    gotoxy(2,28);printf("   \\_____________________________________________________________________________________________________________/");
    }
    }
    else if(option==5)
    {
        while(!kbhit()){
                        time(&segundos);data_hora_atual = localtime(&segundos);
        gotoxy(2,1);printf("   _____________________________________________________________________________________________________________");
        gotoxy(2,2);printf("  /                                                                                                             \\");
        gotoxy(2,3);printf(" /                                                                                                               \\");
        gotoxy(2,4);printf("|                                                                                                                 |");
                                                    gotoxy(45,5);printf("São %i:%i:%i do dia %i/%i/%i",data_hora_atual->tm_hour,data_hora_atual->tm_min,data_hora_atual->tm_sec,data_hora_atual->tm_mday,data_hora_atual->tm_mon+1,data_hora_atual->tm_year+1900);
        gotoxy(2,6);printf("|-----------------------------------------------------------------------------------------------------------------|");
        gotoxy(2,7);printf("|                                                                                                                 |");
        gotoxy(2,8);printf("|                                                                                                                 |");
        gotoxy(2,9);printf("|                                                                                                                 |");
       gotoxy(2,10);printf("|                                               Comprar Bilhetes                                                  |");
       gotoxy(2,11);printf("|                                                                                                                 |");
       gotoxy(2,12);printf("|                                              Consultar Horarios                                                 |");
       gotoxy(2,13);printf("|                                                                                                                 |");
       gotoxy(2,14);printf("|                                              Consultar Reservas                                                 |");
       gotoxy(2,15);printf("|                                                                                                                 |");
       gotoxy(2,16);printf("|                                                 O Meu Perfil                                                    |");
       gotoxy(2,17);printf("|                                                                                                                 |");
       gotoxy(2,18);printf("|                                              ");textbackground(LIGHTBLUE);printf(" Terminar  Sessão ");textbackground(BLACK);printf("                                                 |");
       gotoxy(2,19);printf("|                                                                                                                 |");
       gotoxy(2,20);printf("|                                                     Sair                                                        |");
       gotoxy(2,21);printf("|                                                                                                                 |");
       gotoxy(2,22);printf("|                                                                                                                 |");
       gotoxy(2,23);printf("|                                                                                                                 |");
       gotoxy(2,24);printf("|                                                                                                                 |");
       gotoxy(2,25);printf("|                                                                                                                 |\n ");
       gotoxy(2,26);printf("|                                                                                                                 |\n");
    gotoxy(2,27);printf("  \\                                                                                                               /\n");
    gotoxy(2,28);printf("   \\_____________________________________________________________________________________________________________/");
        }
    }
    else if(option==6)
    {
        while(!kbhit()){
                    time(&segundos);data_hora_atual = localtime(&segundos);
        gotoxy(2,1);printf("   _____________________________________________________________________________________________________________");
        gotoxy(2,2);printf("  /                                                                                                             \\");
        gotoxy(2,3);printf(" /                                                                                                               \\");
        gotoxy(2,4);printf("|                                                                                                                 |");
                                                    gotoxy(45,5);printf("São %i:%i:%i do dia %i/%i/%i",data_hora_atual->tm_hour,data_hora_atual->tm_min,data_hora_atual->tm_sec,data_hora_atual->tm_mday,data_hora_atual->tm_mon+1,data_hora_atual->tm_year+1900);
        gotoxy(2,6);printf("|-----------------------------------------------------------------------------------------------------------------|");
        gotoxy(2,7);printf("|                                                                                                                 |");
        gotoxy(2,8);printf("|                                                                                                                 |");
        gotoxy(2,9);printf("|                                                                                                                 |");
       gotoxy(2,10);printf("|                                               Comprar Bilhetes                                                  |");
       gotoxy(2,11);printf("|                                                                                                                 |");
       gotoxy(2,12);printf("|                                              Consultar Horarios                                                 |");
       gotoxy(2,13);printf("|                                                                                                                 |");
       gotoxy(2,14);printf("|                                              Consultar Reservas                                                 |");
       gotoxy(2,15);printf("|                                                                                                                 |");
       gotoxy(2,16);printf("|                                                 O Meu Perfil                                                    |");
       gotoxy(2,17);printf("|                                                                                                                 |");
       gotoxy(2,18);printf("|                                               Terminar  Sessão                                                  |");
       gotoxy(2,19);printf("|                                                                                                                 |");
       gotoxy(2,20);printf("|                                                    ");textbackground(LIGHTBLUE);printf(" Sair ");textbackground(BLACK);printf("                                                       |");
       gotoxy(2,21);printf("|                                                                                                                 |");
       gotoxy(2,22);printf("|                                                                                                                 |");
       gotoxy(2,23);printf("|                                                                                                                 |");
       gotoxy(2,24);printf("|                                                                                                                 |");
       gotoxy(2,25);printf("|                                                                                                                 |\n ");
       gotoxy(2,26);printf("|                                                                                                                 |\n");
    gotoxy(2,27);printf("  \\                                                                                                               /\n");
    gotoxy(2,28);printf("   \\_____________________________________________________________________________________________________________/");
        }
    }
        getcharacter=getch();
    if(getcharacter =='s'||getcharacter =='S')
    {
        if(option>=6)
        {
            option=6;
        }
        if(option<6)
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

void ticket_selling_layout()
{
    system("cls");

        gotoxy(2,1);printf("   _____________________________________________________________________________________________________________");
        gotoxy(2,2);printf("  /                                            ");textcolor(LIGHTGREEN);printf(".......");textcolor(GREEN+BLINK);printf(",,,..."); textcolor(RED);printf("/*******");textcolor(WHITE);printf("                                            \\");
        gotoxy(2,3);printf(" /                                             ");textcolor(LIGHTGREEN);printf(",,,,,,,");textcolor(GREEN+BLINK);printf("///");textcolor(LIGHTGREEN);printf("*,,"); textcolor(RED);printf("###########(");textcolor(WHITE);printf("                                         \\");
        gotoxy(2,4);printf("|                                                 ");textcolor(LIGHTGREEN);printf(",,,");textcolor(GREEN+BLINK);printf("/*");textcolor(LIGHTGREEN);printf(",, ,,"); textcolor(RED);printf("####.   ####");textcolor(WHITE);printf("                                          |");
        gotoxy(2,5);printf("|                                                 ");textcolor(LIGHTGREEN);printf(",,*");textcolor(GREEN+BLINK);printf("/*");textcolor(LIGHTGREEN);printf(",, ,,"); textcolor(RED);printf("############");textcolor(WHITE);printf("                                          |");
        gotoxy(2,6);printf("|                                                 ");textcolor(LIGHTGREEN);printf(",,");textcolor(GREEN+BLINK);printf("//*");textcolor(LIGHTGREEN);printf(",,,,,"); textcolor(RED);printf("#########");textcolor(WHITE);printf("                                             |");
        gotoxy(2,7);printf("|                                                 ");textcolor(LIGHTGREEN);printf(",");textcolor(GREEN+BLINK);printf("///*");textcolor(LIGHTGREEN);printf("     "); textcolor(RED);printf("####,");textcolor(WHITE);printf("                                                 |");
        gotoxy(2,8);printf("|-----------------------------------------------------------------------------------------------------------------|");
        gotoxy(2,9);printf("|                                                                                                                 |"); //gotoxy(48,8)
       gotoxy(2,10);printf("|");gotoxy(30,10);printf("Insira o Pais de Origem ou digite \"login\" para usar o seu pais:                       |");
       gotoxy(2,11);printf("|                                                                                                                 |");
       gotoxy(2,12);printf("|                                                                                                                 |");
       gotoxy(2,13);printf("|                                                                                                                 |");
       gotoxy(2,14);printf("|                                                                                                                 |");
       gotoxy(2,15);printf("|                                                                                                                 |");
       gotoxy(2,16);printf("|                                                                                                                 |");
       gotoxy(2,17);printf("|                                                                                                                 |");
       gotoxy(2,18);printf("|                                                                                                                 |");
       gotoxy(2,19);printf("|                                                                                                                 |");
       gotoxy(2,20);printf("|                                                                                                                 |");
       gotoxy(2,21);printf("|                                                                                                                 |");
       gotoxy(2,22);printf("|                                                                                                                 |");
       gotoxy(2,23);printf("|                                                                                                                 |");
       gotoxy(2,24);printf("|                                                                                                                 |");
       gotoxy(2,25);printf("|                                                                                                                 |");
       gotoxy(2,26);printf("  |                                                                                                                 |\n");
       gotoxy(2,27);printf("  \\                                                                                                               /\n");
       gotoxy(2,28);printf("   \\_____________________________________________________________________________________________________________/");
}

int roundtrip_layout(char destino[99],int oneway,int roundtrip)
{
int option=1;
char getcharacter;

    while(1)
    {

    if(option==1){

        while(!kbhit()){
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
    gotoxy(2,10);printf("                 Destino Selecionado: %s, Preço Viagem Ida: %i Eur, Preco Viagem Ida e Volta: %i",destino,oneway,roundtrip+oneway);
    gotoxy(2,11);printf("|");     gotoxy(25,11);    puts(" _________________________________________________________________                         |");
    gotoxy(2,12);printf("|");     gotoxy(25,12);    puts("/-----------------------------------------------------------------\\                        |");
    gotoxy(2,13);printf("|");     gotoxy(25,13);    puts("*                                                                 *                        |");
    gotoxy(2,14);printf("|");     gotoxy(25,14);    puts("*                                                                 *                        |");
    gotoxy(2,15);printf("|");     gotoxy(25,15);    puts("*                                                                 *                        |");
    gotoxy(2,16);printf("|");     gotoxy(25,16);    printf("*                           ");textbackground(LIGHTBLUE);printf(" Só Ida ");textbackground(BLACK);printf("                              *                        |");
    gotoxy(2,17);printf("|");     gotoxy(25,17);    puts("*                                                                 *                        |");
    gotoxy(2,18);printf("|");     gotoxy(25,18);    puts("*                                                                 *                        |");
    gotoxy(2,19);printf("|");     gotoxy(25,19);    printf("*                          Ida e Volta                            *                        |");
    gotoxy(2,20);printf("|");     gotoxy(25,20);    puts("*                                                                 *                        |");
    gotoxy(2,21);printf("|");     gotoxy(25,21);    puts("*                                                                 *                        |");
    gotoxy(2,22);printf("|");     gotoxy(25,22);    puts("*                                                                 *                        |");
    gotoxy(2,23);printf("|");     gotoxy(25,23);    puts("\\_________________________________________________________________/                        |");
    gotoxy(2,24);printf("|                                                                                                                 |\n");
    gotoxy(2,25);printf("|                                                                                                                 |\n");
    gotoxy(2,26);printf(" |                                                                                                                 |\n");
    gotoxy(2,27);printf("  \\                                                                                                               /\n");
    gotoxy(2,28);printf("   \\_____________________________________________________________________________________________________________/");
    }
    }
    else if(option==2)
    {
        while(!kbhit()){
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
    gotoxy(2,10);printf("                 Destino Selecionado: %s, Preço Viagem Ida: %i Eur, Preco Viagem Ida e Volta: %i",destino,oneway,roundtrip+oneway);
    gotoxy(2,11);printf("|");     gotoxy(25,11);    puts(" _________________________________________________________________                         |");
    gotoxy(2,12);printf("|");     gotoxy(25,12);    puts("/-----------------------------------------------------------------\\                        |");
    gotoxy(2,13);printf("|");     gotoxy(25,13);    puts("*                                                                 *                        |");
    gotoxy(2,14);printf("|");     gotoxy(25,14);    puts("*                                                                 *                        |");
    gotoxy(2,15);printf("|");     gotoxy(25,15);    puts("*                                                                 *                        |");
    gotoxy(2,16);printf("|");     gotoxy(25,16);    printf("*                            Só Ida                               *                        |");
    gotoxy(2,17);printf("|");     gotoxy(25,17);    puts("*                                                                 *                        |");
    gotoxy(2,18);printf("|");     gotoxy(25,18);    puts("*                                                                 *                        |");
    gotoxy(2,19);printf("|");     gotoxy(25,19);    printf("*                         ");textbackground(LIGHTBLUE);printf(" Ida e Volta ");textbackground(BLACK);printf("                           *                        |");
    gotoxy(2,20);printf("|");     gotoxy(25,20);    puts("*                                                                 *                        |");
    gotoxy(2,21);printf("|");     gotoxy(25,21);    puts("*                                                                 *                        |");
    gotoxy(2,22);printf("|");     gotoxy(25,22);    puts("*                                                                 *                        |");
    gotoxy(2,23);printf("|");     gotoxy(25,23);    puts("\\_________________________________________________________________/                        |");
    gotoxy(2,24);printf("|                                                                                                                 |\n");
    gotoxy(2,25);printf("|                                                                                                                 |\n");
    gotoxy(2,26);printf(" |                                                                                                                 |\n");
    gotoxy(2,27);printf("  \\                                                                                                               /\n");
    gotoxy(2,28);printf("   \\_____________________________________________________________________________________________________________/");
    }
    }
    getcharacter=getch();
    if(getcharacter =='s'||getcharacter =='S')
    {
        if(option>=2)
        {
            option=2;
        }
        if(option<2)
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
        return option-1;
    }

    else
    {
        option=option;
    }

    }
}

#endif // LAYOUTS_H_INCLUDED
