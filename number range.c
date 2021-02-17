/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<stdio.h>
int getnumber();    

int main() {

    int input = 0;
    //call a function to input number from key board
    input = getnumber();
    
    //when input is not in the range of 1 to 9,print error message
    while (!((input <= 9) && (input >= 1))) {
        printf("[ERROR] The number you entered is out of range");
        //input another number
        input = getnumber();
    }
    //this function is repeated until a valid input is given by user.
    printf("The number you entered is %d", input);
    return 0;
}      

//this function returns the number given by user
int getnumber() {    
    int number;
    //asks user for a input in given range printf(" Enter a number between 1 to 9 ");
    scanf("%d", &number);
    return (number);
}
