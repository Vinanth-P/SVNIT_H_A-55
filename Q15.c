#include <stdio.h>

int main() {
   
    float mark1, mark2, mark3, mark4, mark5;
    float total, average;

    
    printf("Enter marks for 5 subjects:\n");
    printf("Subject 1: ");
    scanf("%f", &mark1);
    printf("Subject 2: ");
    scanf("%f", &mark2);
    printf("Subject 3: ");
    scanf("%f", &mark3);
    printf("Subject 4: ");
    scanf("%f", &mark4);
    printf("Subject 5: ");
    scanf("%f", &mark5);

  
    total = mark1 + mark2 + mark3 + mark4 + mark5;
    average = total / 5;

   
    printf("\nAverage Marks: %.2f\n", average);

 
    if (average >= 60) {
        printf("Division:A\n");
    } else if (average >= 50) {
        printf("Division: B\n");
    } else if (average >= 40) {
        printf("Division: C\n");
    } else {
        printf("Division: Fail\n");
    }

    return 0;
}
