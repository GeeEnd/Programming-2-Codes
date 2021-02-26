#include<stdio.h>
#include<conio.h>
 
void main()
{
 int a[8] = {500, 100, 50, 20, 10, 5, 2, 1};
 int Amount, i, temp;
 int xd ='y';
 do {
     
 printf("\n Please Enter the Amount of Cash  =  ");
 scanf("%d", &Amount);
 
 temp = Amount;
  
  	
 for(i = 0; i < 8; i++)
 {
 	printf("\n %d Notes is = %d", a[i], temp / a[i]);
 	temp = temp % a[i];
 
 
 }
 printf("\nwould you like to try again? ");
scanf(" %c", &xd);
}while(xd =='y');

}
