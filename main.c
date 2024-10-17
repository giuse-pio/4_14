#include <stdio.h>

int main(void) {
    int tempFredda=0, tempCalda=0, g=0;
    float temp;
    for (g=0; g<10; g++) {
        printf("inserisci la temeperatura: ");
        scanf("%f",&temp);
        if (temp<5) {
            tempFredda++;
        }
        else if(temp>5) {
            tempCalda++;
        }
    }
    printf("la temperatura e' aumentata di %d volte\n", tempCalda);
    printf("la temperatura e' diminuita di %d volte\n", tempFredda);
}
