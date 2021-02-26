#include<stdio.h> // include stdio.h

int main()
{
    float p, r, t;
    char ch = 'y';

    do
    {
        printf("Enter principal: ");
        scanf("%f", &p);

        printf("Enter rate: ");
        scanf("%f", &r);

        printf("Enter t: ");
        scanf("%f", &t);

        printf("SI = %.2f", (p *r * t)/100 );

        printf("\n\nCalculate SI one more time ? ('y' for Yes, 'n' for no ) : ");
        scanf(" %c", &ch);    // notice the preceding white space before %c 
    }while(ch == 'y');        // keep asking for P, R and T til the input is 'y'

    // signal to operating system everything works fine
    return 0;
}
