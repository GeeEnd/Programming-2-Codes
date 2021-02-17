/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
 
/*  function:   reverseNum
    to reverse an integer number.
*/
 
int reverseNum(int num)
{
    int sum=0,rem;
    while(num > 0)
    {
        rem=num%10;
        sum=(sum*10)+rem;
        num=num/10;
    }
 
    return sum;
}
 
int main()
{
    int n;
    char c;
    printf("\nEnter an integer number :");
    scanf("%d",&n);
    
    if (n==c) {
        printf("You have entered a character");
    }
    else    {
        printf("\nReverse Number is : %d\n",reverseNum(n));
    return 0;
    }
    
}
