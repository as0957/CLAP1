#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    float distance, metre, feet, inch, cm;
    scanf("%f", &distance);
    metre = distance*1000;
    feet = distance*3280.84;
    cm = distance*100000;
    inch = distance*39370.1;
    
    printf("%.2f m\n%.2f ft\n%.2f in\n%.2f cm", metre, feet, inch, cm);
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
