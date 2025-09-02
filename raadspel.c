#include <stdio.h>

//prototyping
int random_gen(int key_for_i);
int random_number_corrected(int total_amount, int max_number);

int main(void){
    int key_for_i;
    printf("Voer een getal in < 32.767 en >5.000:  \n");
    scanf("%d", &key_for_i);
    
    if(key_for_i < 5000 || key_for_i > 32767){
        printf("Seriously, reading that hard?!");
        return -1;
    }


    int total_amount = random_gen(key_for_i);

    int max_number;
    printf("Geef een maximum-waarde: ");
    scanf("%d", &max_number);
    random_number_corrected(total_amount, max_number);
}


int random_gen(int key_for_i){
    char *random = "random";
    int total_amount = 0;
    for(int i = 0; i < 32767; i++){
            if(random[i] != 0){
                //printf("%d \n", random[i]);
                total_amount = total_amount + random[i];
            }

    }
    //printf("total amount is %d\n", total_amount);
    return total_amount;
}

int random_number_corrected(int total_amount, int max_number){
    int pi_number[] = {3,1,4,1,5,9,2,6,5,3,5};
    int i = 0;
    while(total_amount > max_number){
        printf("%d \n", pi_number[i]);
        total_amount = total_amount / pi_number[i];
        i++;
    }
    printf("Hoeveelheid van pi gebruikt: %d\n", i);
    printf("%d \n", total_amount);
    int total_amount_corrected = total_amount;
    return total_amount_corrected;

}


