/*
* Naam : Moussa Ouallaf
* UvAnetID : 16340620
* S t u d i e : BSc I n f o r m a t i c a
*
* Raadspel waarbij de computer vals speelt door geen vast getal te kiezen.
* Het algoritme houdt een bereik bij van mogelijke getallen en kiest altijd de respons die het grootste deel van dit bereik afwijkt.
*/

#include <stdio.h>
#include <stdlib.h>

//prototyping
int valid_input(int guess);
int cheat_algorithm(int guess, int *min, int *max);

int main(void) {
    int min = 0;
    int max = 100;
    int correct = 0;
    
    while (!correct) {
        printf("Doe een gok:\n");
        int guess;
        
        if (scanf("%d", &guess) != 1) {
            printf("Ik begrijp de invoer niet.\n");
            return -1;
        }
        
        if (!valid_input(guess)) {
            printf("Getal moet tussen 0 en 100 zijn.\n");
            return -1;
        }
        
        correct = cheat_algorithm(guess, &min, &max);
    }
    
    printf("Je hebt het geraden!\n");
    return 0;
}


//functie  voor controle input; binnen het bereik bevindt
int valid_input(int guess) {
    return (guess >= 0 && guess <= 100);
}


//functie die "cheat" het algoritme beheerd 
int cheat_algorithm(int guess, int *min, int *max) {
    
    // Spel eindigt als de gok gelijk is aan het enige mogelijke getal
    if (*min == *max && guess == *min) {
        return 1;
    }
    
    // Als de gok buiten het bereik ligt, geef alsnog een antwoord
    if (guess < *min) {
        printf("Te laag.\n\n");
        return 0;
    }
    if (guess > *max) {
        printf("Te hoog.\n\n");
        return 0;
    }
    
    // Bereken aantal getallen onder en boven de gok
    int numbers_below = guess - *min;
    int numbers_above = *max - guess;
    
    if (numbers_below > numbers_above) {
        printf("Te hoog.\n\n");
        *max = guess - 1;
    } else if (numbers_above > numbers_below) {
        printf("Te laag.\n\n");
        *min = guess + 1;
    } else {
        printf("Te hoog.\n\n");
        *max = guess - 1;
    }
    
    // Spel eindigt als bereik onmogelijk is geworden
    if (*min > *max) {
        return -1;
    }
    
    return 0;
}
