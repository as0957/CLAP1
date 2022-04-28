#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int m, n, a, output;
    scanf ("%d",&m);
    scanf("%d",&n);
    
    a = m*n ;
    (a%2>0)?(a=a+1):(a=m*n);
    output = (a)/2;
    printf("%d", output);

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
