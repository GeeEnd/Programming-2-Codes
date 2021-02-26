#include <stdio.h>
int main()
{
    int a[100], number, i, j, temp;
    printf("\n Please Enter the total Number of Elements  :  ");
    scanf("%d", &number);
    printf("\n Please Enter the Array Elements  :  ");
    for(i = 0; i < number; i++)
        scanf("%d", &a[i]);
    
    i = 0;
    while( i < number) {
        j = i + 1;
        while( j < number) {
            if(a[i] > a[j]) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
            j++;
        }
        i++;
    }
    printf("\n Selection Sort Result : ");
    for(i = 0; i < number; i++)  {
        printf(" %d \t", a[i]);
    }
    printf("\n");
    return 0;
}
