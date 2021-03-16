#include<stdio.h>
#include<stdlib.h>
#include<math.h>

 main()
{
    int x1,y1,x2,y2;
    int n;
    int distance;
    
    printf("Enter value of X:");
    scanf("%d %d",&x1,&x2);
    printf("Enter value of X:");
    scanf("%d %d",&y1,&y2);
    
    distance=sqrt(pow(x1,2)+pow(x2,2) + pow(y1,2)+pow(y2,2));
    //printf("Enter value of Y:");
   // scanf("%d",&y);
    
    //dif=x-y;

    //n=abs(dif);
    printf("Distance is = %d\n",distance);
}
