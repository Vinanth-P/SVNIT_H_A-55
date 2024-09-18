
// PROGRAM TO CONVERT TEMPERATURE FROM FAHRENHEIT TO
//CENTIGRADE DEGREES.

#include <stdio.h>

int main() {
    int f;
    printf("enter temp in F:\n");
    scanf("%d",&f);
    
    float c; 
    c=5.0/9.0*(f-32);
    printf("the temp in celsius is %f",c);
    

    return 0;
}


