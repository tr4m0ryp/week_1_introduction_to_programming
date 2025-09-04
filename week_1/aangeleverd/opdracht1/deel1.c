
/*
* Naam : Moussa Ouallaf
* UvAnetID : 16340620
* S t u d i e : BSc I n f o r m a t i c a
*
* Programma vraagt de user om a en b in te voeren (som en verschil).
* Controleert op fouten bij het inlezen, en berekent de oorspronkelijke getallen x en y.
*/

#include <stdio.h>

//prototyping
int error_check(int code);

int main(void){
    printf("Geef de waarde voor a: ");
    int a;
    int code = 0;
    code = scanf("%d", &a);
    if(error_check(code) != 0) return -1;
    
    printf("Geef de waarde voor b: ");
    int b;
    code = scanf("%d", &b);
    if(error_check(code) != 0) return -1;
    
    // Bereken x en y uit a en b
    int x = (a + b) / 2;
    int y = (a - b) / 2;
    
    printf("x = %d\n", x);
    printf("y = %d\n", y);
    
    return 0;
}


//functie voor controleren of de gescande waarde een %d (integer) is.
int error_check(int code){
    if(code != 1){
        printf("Het lezen van een getal is niet goed gelukt. Ik stop ermee.\n");
        return -1;
    }
    return 0;
}
