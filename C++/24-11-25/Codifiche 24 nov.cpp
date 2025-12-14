#include <iostream>

using namespace std;

void Controllo()
{
    int eta;
    string nome;
    cout<<"chi è il gay che ha (forse) 18 anni?: ";
    cin>>nome;
    cout<<"quanti ne tieni?: ";
    cin>>eta;
    if (eta>=18)
    {
        cout<<nome<<"è maggiorenne (daje)";
    }

}
void Massimo()
{

    int num1,num2,num3;
    cout<<"inserire il primo numero: ";
    cin>>num1;
    cout<<"inserire il secondo numero: ";
    cin>>num2;
    cout<<"inserire il terzo numero: ";
    cin>>num3;
    int max=num1;
    if (num2>max)
    {
        max=num2;
    }
    else if (num3>max)
    {
        max=num3;
    }
    cout<<max;
}
void SommaProdotto()
{
    int a,b;
    int ris;
    cout<<"inserire il primo numero: ";
    cin>>a;
    cout<<"inserire il secondo numero: ";
    cin>>b;
    if (a>0)
    {
        if (b>0)
        {
            ris=a+b;
        }
        else 
        {
            ris=a*b;
        }
    }
    else
    {
        ris=a*b;
    }
    cout<<"il risultato è "<<ris;
}
void Operazioni()
{
    float n1,n2,ris;
    char operatore;
    cout<<"inserire il primo numero: ";
    cin>>n1;
    cout<<"inserire il secondo numero: ";
    cin>>n2;
    cout<<"inserire l'operatore: ";
    cin>>operatore;
    switch (operatore)
    {
        case '+':
        ris=n1+n2;
        cout<<"somma= "<<ris;
        break;
        case '-':
        ris=n1-n2;
        cout<<"differenza= "<<ris;
        break;
        case '*':
        ris=n1*n2,
        cout<<"prodotto= "<<ris;
        break;
        case '/':
        if (n2==0)
        {
            cout<<"errore";
        }
        else
        {
            ris=n1/n2;
            cout<<"divisione= "<<ris;
        }
        break;
        default:
        cout<<"operazione inesistente";
        break;
    }


}
int main()
{
    Controllo();
    Massimo();
    SommaProdotto();
    Operazioni();
}


