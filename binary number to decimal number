#include <stdio.h>
#include <math.h>

int main()
{
    int num=0; // variable to hold decimal number
    int bin; // variable to hold binary value
    int bindigit; // variable to hold individual binary digit
    int i=0; // variable counter to calculate power of 2
    
    printf("Enter binary number:"); 
    scanf("%d", &bin); // Read number into 'bin'
    while(bin){ // loop until bin isn't 0
      bindigit = bin%10;      //extract single binary digit 
      num += bindigit*pow(2, i); 
      bin = bin/10; // divide num by 10 to get next digit of binary
      i++;  // increment conuter
    }

    printf("Decimal number: %d", num);
    return 0;
}
