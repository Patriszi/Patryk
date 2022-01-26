#include <iostream>
using namespace std;

class operacje

{
private:
    float z;
    int   x;
public:

    operacje(double kwota,int saldo)
    {
        z=kwota;
        x=saldo;
    };
     void wyswietl(){

        cout << "Wplaciles: " << z << "PLN\n";
        cout << "Obecny stan konta: " << x << "PLN" << endl ;
    }
    void wplac(double kwota){

        this->x = kwota+this->x;
        this->z = kwota;
    }
    void saldoo(){

        cout << "Obecny stan konta: " << x << "PLN" << endl ;
    }
    void wyplac(double kwota, HANDLE hConsole){

        if (this->x - kwota>=0){
                 this->x = this->x - kwota;
                 cout << "Wyplaciles: " << z << "PLN\n";
                 cout << "Obecny stan konta: " << x << "PLN" << endl << endl;

                 }else{
                  (this->x<0);
                  SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
                 cout << "Nie masz tyle srodkow na koncie. Obecnie posiadasz:" << x << "PLN" << endl << endl;
                 }
    }
};
