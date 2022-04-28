#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    float sqfeet, acre ;
    scanf("%f",&sqfeet) ;
    acre = sqfeet/43560 ;
    printf("%.2f sq.ft is equal to ",sqfeet );
    printf("%.2f acres", acre);

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
