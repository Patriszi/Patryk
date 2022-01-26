#include <iostream>
#include <math.h>
#include <conio.h>
#include <windows.h>
#include <locale.h>
#include <time.h>
#include <cstdlib>
#include <cstdio>
#include <stdio.h>
#include "Bankomat.cpp"
#include "operacje.cpp"

using namespace std;
string action;
string regUsername, regPassword, regConfirmPassword;
string logUsername, logPassword;
string regPIN, regConfirmPIN;

float z;
int x;
int y;
int a;
int b;
int c;

int main(){

operacje kw=operacje(0,0);
HANDLE  hConsole = GetStdHandle(STD_OUTPUT_HANDLE);


  while(action !="Zarejestruj" && action!="Zaloguj")
    {	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);
        cout << "--------------------------------------------------                                Projekt wykonali : Patryk Zdrodowski oraz Piotr Lenarczyk" << endl;
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
        cout << "Witamy w wirtualnym banku samoobslugowym SelfCash!" << endl;
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
        cout << "Aby stworzyc konto wpisz 'Zarejestruj'" << endl;
        cout << "Aby zalogowac sie na konto wpisz 'Zaloguj'" << endl;
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);
        cout << "---------------------------------------------------" << endl;
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
        cin >> action;
        system("cls");
    }
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
    if ( action == "Zarejestruj" ){

        cout << "#REJESTRACJA#" << endl;
        cout << "NAZWA UZYTKOWNIKA: ";
        cin >> regUsername;

		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
        cout << "#REJESTRACJA#" << endl;
        cout << "HASLO: ";
        cin>> regPassword;
        system("cls");

		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
        cout << "#REJESTRACJA#" << endl;
        cout << "POWTORZ HASLO: ";
        cin >> regConfirmPassword;
        system("cls");


           while(regPassword!=regConfirmPassword)
            {	SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
                cout << "#REJESTRACJA#: HASLA ROZNIA SIE / WPISZ HASLA JESZCZE RAZ" << endl;
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
                cout << "HASLO: ";
                cin>> regPassword;
                system("cls");

                cout << "#REJESTRACJA#" << endl;
                cout << "POWTORZ HASLO: ";
                cin >> regConfirmPassword;
                system("cls");
            }

        for(int i=3; i>=0; i--)
        {
            Sleep(1000);
            system("cls");
            SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
            cout << "#REJESTRACJA# KONTO ZOSTALO UTWORZONE!" << endl;
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
            cout << "------------------------" << endl;
            cout << "TRWA PRZEKIEROWYWANIE: " << i << endl;
            cout << "------------------------" << endl;
        }

        system("cls");


      }
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
        cout << "#LOGOWANIE#" << endl;
        cout << "NAZWA UZYTKOWNIKA: ";
        cin >> logUsername;


        cout << "#LOGOWANIE#" << endl;
        cout << "HASLO: ";
        cin >> logPassword;
        system("cls");

        while(logPassword!=regPassword || logUsername != regUsername)
        {	SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
            cout << "#LOGOWANIE#: BLEDNE DANE" << endl;
        	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
            cout << "NAZWA UZYTKOWNIKA: ";
            cin >> logUsername;


            cout << "#LOGOWANIE#" << endl;
            cout << "HASLO: ";
            cin >> logPassword;
            system("cls");
        }	SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
        cout << "ZALOGOWANO POMYSLNIE" << endl;

system("cls");


	for(int i=3; i>=0; i--)
        {
            Sleep(1000);
            system("cls");

    cout << "-----------------------------------" << endl;
    cout << "Trwa Generowanie Numeru Konta:"<<i<<endl;
    cout << "-----------------------------------" << endl;

        }
            system("cls");

    for(int i = 0; i < 1; i++)
	{

	        srand(time(NULL)); // ta funkcja ustawia losowy punkt generowania danych, w tym przypadku wykorzystana zosta3a funkcja time z pliku nag3ówkowego time.h, funkcja ta zwraca liczbe okreolaj1c1 czas


    cout<< "NUMER KONTA" <<endl;
    cout<< (rand() % 200) + 10000000000000000 <<endl;

    }

        int proby = 4;

		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
        cout << "STWORZ KOD PIN"<< endl;
        cin >> regPIN;
        cout << "POWTORZ PIN "<< endl;
        cin >> regConfirmPIN;

        if (regPIN==regConfirmPIN)
        {
        	SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
            cout << "POPRAWNY KOD PIN";
             Sleep(1000);
       }
       else

do{
       proby--;
       SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
       cout << "BLEDNY KOD PIN. ZOSTALO " << proby << " PROB"<< endl;
       SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
       cin >> regConfirmPIN;

if ( proby<4 && regPIN==regConfirmPIN ){

SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
cout << "POPRAWNY KOD PIN";
}
if ( proby<1 && regPIN!=regConfirmPIN )
    {
SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
cout << "TWOJE KONTO ZOSTALO ZABLOKOWANE"<< endl;

        return 0;
}
}while (regPIN!=regConfirmPIN);
system("cls");


do {

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
        cout << "-------------------------------------------------" << endl;

        cout << "WITAMY W WIRTUALNYM BANKU SAMOOBSLUGOWYM SELFCASH" <<endl;

        cout <<"--MENU--" << endl;

        cout <<"1. Wplacam pieniadze"  << endl;

        cout <<"2. Wyplacam pieniadze" << endl;

        cout <<"3. Sprawdz stan konta" << endl;

        cout <<"4. Destrukcja konta" << endl;

        cout <<"5. Wyjscie" << endl;

        cout << "-------------------------------------------------" << endl;

        cin >> y;



       switch (y){
        case 1:
{

                 cout << "Ile pieniedzy wplacasz?: ";
                 cin >> z;
                 if (z<10001){

					 kw.wplac(z);


                 kw.wyswietl();break;

                 }else{(z>10001);
        cout << "Maksymalny limit wplaty zostal przekroczony" << endl ; break;
                 }
}
        case 2:  cout << "Ile pieniedzy wyplacasz?: ";
                 cin >> z;
                 if (z>10001){
                     SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
                    cout << "Maksymalny limit wyplaty zostal przekroczony" << endl << endl; break;
                 }
                 kw.wyplac(z,hConsole);break;
        case 3:

                kw.saldoo();break;


        case 4:  cout << "Twoje konto zostalo usuniete. Dziekujemy "<< logUsername <<" za korzystanie z naszego banku SelfCash!" << endl << endl; break;


					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
        case 5:  cout << "Do widzenia. "<< logUsername << endl << endl; break;

        default: cout <<"Nie ma takiej opcji\n";
        break;

        }
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
if(y!=4 && y!=5){
    cout << "Czy chcesz zrobic cos jeszcze?" << endl;
    cout << "1. POWROT" << endl;
    cout << "2. WYJDZ" << endl;
    cin >> a;
    system("cls");
}else{

    return 0;
}

}while (a==1);


cin.get();
getch();
system("PAUSE");
    return 0;

    }
