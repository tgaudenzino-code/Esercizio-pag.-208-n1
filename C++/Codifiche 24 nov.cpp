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
int main()
{
    Controllo();
}


