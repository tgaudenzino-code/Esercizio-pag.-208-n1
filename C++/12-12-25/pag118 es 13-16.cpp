#include <iostream>
using namespace std;
void esercizio13()
{
    int n1, n2, n3;
    cout << "Inserisci tre numeri interi: ";
    cin >> n1 >> n2 >> n3;
    if (n1 + n2 > n3 && n1 + n3 > n2 && n2 + n3 > n1) {
        cout << "I tre numeri possono essere le lunghezze dei lati di un triangolo." << endl;
    } else {
        cout << "I tre numeri non possono essere le lunghezze dei lati di un triangolo." << endl;
    }
}
void esercizio14()
{
     const int TARIFFA = 2;   
    const int SOSTA = 1;     

    int entrata, uscita, durata;

   
    cout << "Inserisci l'ora di entrata (in minuti): ";
    cin >> entrata;
    cout << "Inserisci l'ora di uscita (in minuti): ";
    cin >> uscita;
    durata = uscita - entrata;
    if (durata <= 60) {
        cout << "Il costo del parcheggio e': " << SOSTA << " euro." << endl;
    } else {
        int ore = (durata - 1) / 60;
        int costo = SOSTA + (ore + 1) * TARIFFA;
        cout << "Il costo del parcheggio e': " << costo << " euro." << endl;
    }
}
void esercizio15()
{
    const double TARIFFA = 0.02;
    int peso;
    double costo_biglietto;
    cout << "Inserisci il costo del biglietto in euro: ";
    cin >> costo_biglietto;
    cout << "Inserisci il peso del bagaglio in kg: ";
    cin >> peso;
    if (peso > 20) {
        costo_biglietto = costo_biglietto + (costo_biglietto * TARIFFA);
    }
    cout << "Il costo totale del biglietto e': "
         << costo_biglietto << " euro" << endl;
}
void esercizio16()
{
    string anno1, sezione1, anno2, sezione2, anno3, sezione3;
    int s1, s2, s3;
    cout << "Anno prima classe: ";
    cin >> anno1;
    cout << "Sezione prima classe: ";
    cin >> sezione1;
    cout << "Studenti prima classe: ";
    cin >> s1;
    cout << "Anno seconda classe: ";
    cin >> anno2;
    cout << "Sezione seconda classe: ";
    cin >> sezione2;
    cout << "Studenti seconda classe: ";
    cin >> s2;
    cout << "Anno terza classe: ";
    cin >> anno3;
    cout << "Sezione terza classe: ";
    cin >> sezione3;
    cout << "Studenti terza classe: ";
    cin >> s3;
    if (s1 >= s2 && s1 >= s3)
        cout << "Classe con piu' studenti: " << anno1 << " " << sezione1 << endl;
    else if (s2 >= s1 && s2 >= s3)
        cout << "Classe con piu' studenti: " << anno2 << " " << sezione2 << endl;
    else
        cout << "Classe con piu' studenti: " << anno3 << " " << sezione3 << endl;
    int media = (s1 + s2 + s3) / 3;
    cout << "Media studenti: " << media << endl;
    cout << "Classi sotto la media:" << endl;
    if (s1 < media) cout << anno1 << " " << sezione1 << endl;
    if (s2 < media) cout << anno2 << " " << sezione2 << endl;
    if (s3 < media) cout << anno3 << " " << sezione3 << endl;

}
int main() 
{
    esercizio13();
    esercizio14();
    esercizio15();
    esercizio16();
}