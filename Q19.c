#include <stdio.h>

int main() {
    char c;
    printf("enter a character:\n");
    scanf("%c",&c);
    
    (c>='a' && c<='z')?printf("the entered charcter is small case"):printf("the entered charcter is big case");
    
    return 0;
    
    
}
