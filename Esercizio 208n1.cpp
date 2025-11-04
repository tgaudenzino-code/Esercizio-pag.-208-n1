#include <iostream>

using namespace std;

int ChiediScelta();
void Triangolo();
void Quadrato();
void Rettangolo();
void Rombo();
void Stampa(string figura, float area);

int main()
{
    int scelta = ChiediScelta();

    switch (scelta)
    {
    case 1:
        Triangolo();
        break;
    case 2:
        Quadrato();
        break;
    case 3:
        Rettangolo();
        break;
    case 4:
        Rombo();
        break;
    }
}

int ChiediScelta()
{
    int x;

    cout << "Scegli opzione: \n"
        << "1 Triangolo\n"
        << "2 Quadrato\n"
        << "3 Rettangolo\n"
        << "4 Rombo\n"
        << "5 Stampa\n"
        << "\nInserisci qui: ";
    cin >> x;

    if (x > 5 || x < 1)
    {
        return ChiediScelta();
    }
    return x;
}

void Stampa(string figura, float area)
{
    cout << "Area del " << figura << " = " << area;
}

void Triangolo()
{
    int base;
    int altezza;

    cout << "Inserisci base: ";
    cin >> base;
    cout << "Inserisci altezza: ";
    cin >> altezza;

    string figura = "Triangolo";

    int area = base * altezza / 2;

    Stampa(figura, area);
}

void Quadrato()
{
    int lato;

    cout << "Inserisci lato: ";
    cin >> lato;

    string figura = "Quadrato";

    int area = lato * lato;

    Stampa(figura, area);
}

void Rettangolo()
{
    int base;
    int altezza;

    cout << "Inserisci base: ";
    cin >> base;
    cout << "Inserisci altezza: ";
    cin >> altezza;

    string figura = "Rettangolo";

    int area = base * altezza;

    Stampa(figura, area);
}

void Rombo()
{
    int diagmin;
    int diagmag;

    cout << "Inserisci diagonale minore: ";
    cin >> diagmin;
    cout << "Inserisci diagonale maggiore: ";
    cin >> diagmag;

    string figura = "Rombo";

    int area = diagmin * diagmag / 2;

    Stampa(figura, area);
}