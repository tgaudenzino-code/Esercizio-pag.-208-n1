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
int main()
{
    //Controllo();
    Massimo();
}


