#include <stdio.h>
#include <unistd.h>


//prototyping
float pythagoras(float lengte, float breedte);

int main (void){
    float lengte, breedte; 
    int correct = 0;
    
    while(correct < 2){
        printf("Voer de lengte in:");

        if(scanf("%f", &lengte) != 1){
            printf("You have made an mistak in your input, please try again \n");
            while (getchar() != '\n')
            continue;
        }else{
            correct ++;
        }
                
        printf("Voer de breedte in:");
        
        if (scanf("%f", &breedte) != 1){
            printf("You have made an mistak in your input, please try again \n");
            while(getchar() != '\n')
            continue;
        }else{
            correct ++;
        }
        
    }
    
    pythagoras(lengte, breedte);

    
    return 0;

}

float pythagoras(float lengte, float breedte){
    float sum = (lengte * lengte + breedte * breedte);
    printf("%f \n", sum);
    return sum;
}

