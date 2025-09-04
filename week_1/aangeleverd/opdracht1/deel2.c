
/*
* Naam : Moussa Ouallaf
* UvAnetID : 16340620
* S t u d i e : BSc I n f o r m a t i c a
*
* Programma tekent een nutteloze driehoek van sterren en punten op het scherm
*/

#include <stdio.h>

int main(void){
    for(int i = 0; i < 13; i++){
        int spaces = 1 * i;
        int run = 0;
        while(run < spaces){
            printf("  ");
            run ++;
        }
        printf("*");
       int run_2 = 0;

       while(run_2 < spaces){
            printf("..");
            run_2++;
        }
        printf("*\n");
    }

    for(int i = 9; i >= 0 ; i--){
        int spaces = 14 + (13 - i) - 3 - 1 - 1; 
        int run = 0;
        while(run < spaces){
            printf("  ");
            run ++;
        }
        printf("*");
        int dots = i * 3 - 1;
        for(int j = 0; j < dots; j++){
            printf(".");
        }
        if(dots > 0) {
            printf("*");
        }
        printf("\n");
    }
    }
