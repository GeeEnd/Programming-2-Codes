/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void reverse();

 main()
{
    printf("Please enter a sentence: ");
    reverse();
}

void reverse()
{
    int i;
    scanf("%d", &i);
    if (i != '\n') {
        reverse();
        printf("%d", i);
    }
}