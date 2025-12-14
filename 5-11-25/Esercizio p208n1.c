#include <stdio.h>

int ChiediScelta();
void Triangolo();
void Quadrato();
void Rettangolo();
void Rombo();
void Stampa(char figura[], float area);

int main() {
    
    int scelta = ChiediScelta();
    
    switch(scelta){
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

int ChiediScelta() {
    int x;

    printf("Scegli un'opzione: \n"
           "1 Triangolo\n"
           "2 Quadrato\n" 
           "3 Rettangolo\n"
           "4 Rombo\n"
           "5 Stampa\n"
           "\nInserisci qui: ");
    scanf("%d", &x);
    
    if(x>5 || x<1){
        return ChiediScelta();
    }

    return x;
}

void Stampa(char figura[], float area){
    printf("\nArea del %s = %.2f\n", figura, area);
}

void Triangolo(){
    
    int base;
    int altezza;
    
    printf("\nInserisci base: ");
    scanf("%d", &base);
    printf("\nInserisci altezza: ");
    scanf("%d", &altezza);
    
    char figura[] = "Triangolo";
    
    float area = base*altezza/2;
    
    Stampa(figura, area);
}

void Quadrato(){
    
    int lato;
    
    printf("\nInserisci lato: ");
    scanf("%d", &lato);
    
    char figura[] = "Quadrato";
    
    float area = lato*lato;
    
    Stampa(figura, area);
}

void Rettangolo(){
    
    int base;
    int altezza;
    
    printf("\nInserisci base: ");
    scanf("%d", &base);
    printf("\nInserisci altezza: ");
    scanf("%d", &altezza);
    
    char figura[] = "Rettangolo";
    
    float area = base*altezza;
    
    Stampa(figura, area);
}

void Rombo(){
    
    int diagmin;
    int diagmag;
    
    printf("\nInserisci diagonale minore: ");
    scanf("%d", &diagmin);
    printf("\nInserisci diagonale maggiore: ");
    scanf("%d", &diagmag);
    
    char figura[] = "Rombo";
    
    float area = diagmin*diagmag/2;
    
    Stampa(figura, area);
}
