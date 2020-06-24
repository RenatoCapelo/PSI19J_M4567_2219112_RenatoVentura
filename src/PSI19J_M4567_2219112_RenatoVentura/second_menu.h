#ifndef SECOND_MENU_H_INCLUDED
#define SECOND_MENU_H_INCLUDED

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

#endif // SECOND_MENU_H_INCLUDED
