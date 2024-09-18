#include <stdio.h>

int main() {
    int s,h,m,d,hours,minutes;
    s=31558150;
    m=s/60;
    h=m/60;
    d=h/24;
    hours=h%24;
    minutes=m%60;
    printf("earths period of revolution is %d days %d hours %d minutes",d,hours,minutes);
    

    return 0;
}
