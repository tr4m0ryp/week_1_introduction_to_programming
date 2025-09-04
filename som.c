
#include <stdio.h>
int main(void) {
    int getal;
    printf("Geef een getal op:\n");
    scanf("%d", &getal);
    int teller;
    teller = 1;
    int antwoord;
    antwoord = 0;
    
    while (teller <= getal) {
        antwoord = antwoord + teller;
        teller = teller + 1;
    }
    
    printf("De som is %d\n", antwoord);
    return 0;
}


