#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a,b, quotient, remainder ;
    scanf("%d\n%d", &a,&b);
    quotient = a/b;
    remainder=a%b;
    printf("Quotient:%d", quotient);
    printf("\nRemainder:%d", remainder);

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
