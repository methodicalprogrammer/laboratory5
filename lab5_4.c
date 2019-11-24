#include <stdio.h>
#include <stdlib.h>

void conversion(float cel){
    float f;
    f = (9.0/5)*cel + 32;
    printf("\nThe temperature in the Fahreheit scale is : %f", f);
}


int main(){
    float cel;
    printf("Type a temeprature in the Celsius scale: ");
    scanf("%f", &cel);
    conversion(cel);
}

