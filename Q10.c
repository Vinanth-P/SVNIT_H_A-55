/*10. WRITE A C PROGRAM TO CALCULATE THE CUT OFF
MARK OF A STUDENT USING THE FORMULA.
CM = M/2+P/2+C/2+E
WHERE CM = Cut of f mark
M = Marks in Mathematics out of 200
P = Marks in Physics out of 200
C = Marks in Chemistry out of 200
E = Marks in entrance examination out of 100*/


#include<stdio.h>

int main()
{
    int m,p,c,e;
    printf("enter mathematics marks:\n");
    scanf("%d",&m);
    printf("enter physics marks:\n");
    scanf("%d",&p);
    printf("enter chemistry marks:\n");
    scanf("%d",&c);
    printf("enter entrance examination marks:\n");
    scanf("%d",&e);
    
    float cm=(m/2)+(p/2)+(c/2)+e;
    
    printf("the cutoff marks is %.2f",cm);
    
    
    
    
    
    
    return 0;
}
