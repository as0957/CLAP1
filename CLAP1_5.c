#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int inp, days,hours, minutes,seconds ;
    scanf("%d",&inp);
    days= inp/86400;
    hours=(inp%86400)/3600;
    minutes=((inp%86400)%3600)/60;
    seconds = ((inp%86400)%3600)%60;
    printf("The Duration is %d days ",days);
    printf("%d hours ",hours);
    printf("%d minutes ",minutes);
    printf("%d seconds ",seconds);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
