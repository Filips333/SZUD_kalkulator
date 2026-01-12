#include <stdio.h>

int deljenje(int a, int b){
    return a/b;
}

int mnozenje(int a, int b){
    return a*b;
}

int oduzmi(int a, int b){
    return a-b;
}

// Funkcija za sabiranje
int saberi(int a, int b) {
    return a + b;
}

int main() {
    int izbor;
    int x, y;

    printf("C Kalkulator");
    printf("Izaberite operaciju:\n");
    printf("1. Sabiranje\n");
    printf("2. Oduzimanje\n");
    printf("3. Mnozenje\n");
    printf("4. Deljenje\n");
    printf("Vas izbor: ");
    scanf("%d", &izbor);

    printf("Unesite dva broja: ");
    scanf("%d %d", &x, &y);

    switch(izbor) {
        case 1:
            printf("Rezultat: %d\n", saberi(x, y));
            break;
        case 2:
            printf("Rezultat: %d\n", oduzmi(x, y));
            break;
        case 3:
            printf("Rezultat: %d\n", mnozenje(x, y));
            break;
        case 4:
            if(y != 0)
                printf("Rezultat: %d\n", deljenje(x, y));
            else
                printf("Greska: deljenje sa nulom!\n");
            break;
        default:
            printf("Nepostojeca opcija!\n");
    }

    return 0;
}

