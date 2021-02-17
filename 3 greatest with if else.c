/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
int main(){
    
    int a, b, c;
    printf("Enter a,b,c: ");
    scanf("%d %d %d", &a, &b, &c);
    
    if (a > b && a > c) {
        printf("a is Greater than b and c");
    }
    else if (b > a && b > c) {
        printf("b is Greater than a and c");
    }
    else if (c > a && c > b) {
        printf("c is Greater than a and b");
    }
    else {
        printf("all are equal or any two values are equal");
    } 
    return 0;
}