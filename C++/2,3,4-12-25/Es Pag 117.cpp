#include <iostream>
#include <cmath>
using namespace std;
void Esercizio1 (int x)
{
    if (x<0)
    {
        cout<<"x è negativo";
    }
    else 
    {
        cout<<"x è positivo";
    }

}
void Esercizio2 ()
{
    int x,y;
    cin>>x>>y;
    if (x>y)
    {
        cout<<y<<" "<<x;
    }
    else
    {
        cout<<x<<" "<<y;
    }
}
void Esercizio3 (bool c1,bool c2)
{
    if (c1)
    {
        if (c2)
        {
            cout<<"istruzione 2";
        }
        else
        {
            cout<<"istruzione 1";
        }
    }
    else
    {
        cout<<"istruzione 3";
    }
}
void Esercizio4 ()
{
    float sec;
    float min;
    float ore;
    int s;
    cin>>ore;
    cout<<"vuoi convertire le ore in minuti o secondi? (1=minuti) (0=secondi)";
    cin>>s;
    switch (s)
    {
        case 1:
        min= ore*60;
        cout<<min;
        break;
        case 0:
        sec= ore*3600;
        cout<<sec;
        break;
        default:
        cout<<"errore";
    }
}
void Esercizio5 ()
{
    float a,b,c;
    cin>>a>>b>>c;
    if (a!=0)
    {
        float delta= b*b-4*a*c;
        if (delta>0)
        {
            float x1;
            float x2;
            x1=(-b+sqrt(delta))/(2*a);
            x2=(-b-sqrt(delta))/(2*a);
            cout<<x1<<" "<<x2;
        }
        else
        {
            if (delta==0)
            {
                float x;
                x= -b/(2*a);
                cout<<x;
            }
            else
            {
                cout<<"l'equazione non ha radici reali";
            }
        }
    }
    else
    {
        cout<<"l'equazione non è di secondo grado";
    }
}
void Esercizio6 ()
{
    char carattere;
    cout<<"inserisci s o n: ";
    cin>>carattere;
    switch (carattere)
    {
        case 's':
        case 'S':
        cout<<"si";
        break;
        case 'n':
        case 'N':
        cout<<"no";
        break;
        default:
        cout<<"errore";
    }
}
void Esercizio7 ()
{
    int num;
    cin>>num;
    if (num<-5 || num>10)
    {
        cout<<"il dato è fuori dall'intervallo";
    }
    else
    {
        cout<<"ok";
    }
}
void Esercizio8 ()
{
    int x,y,z;
    cout<<"metti i numeri di cui vuoi sapere la progressione";
    cin>>x>>y>>z;
    if (y-x==z-y)
    {
        cout<<"è una progressione aritmetica";
    }
    else
    {
        cout<<"non è una progressione aritmetica";
    }
}
void Esercizio9 (float f, float c, float k)
{
    int cost;
    cout<<"inserisci la temperatura da non superare";
    cin>>cost;
    if ((f+c+k)/3<cost)
    {
        cout<<"il riscaldamento è acceso";
    }
    else
    {
        cout<<"il riscaldamento non è acceso";
    }
}
int main ()
{
    //Esercizio1 (-5);
    //Esercizio2 ();
    //Esercizio3 (true,false);
    //Esercizio4 ();
    //Esercizio5 ();
    //Esercizio6 ();
    //Esercizio7 ();
    //Esercizio8 ();
    //Esercizio9 (10,30,15);
}
