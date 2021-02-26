#include <stdio.h>


int main()
{
    int opt,i, n,num;
    printf("How many numbers do you want to enter? ");
    scanf("%d",&n);
    for(;;)
    {
        printf("Enter option to select operation\n 1.Addition\n 2.Subtraction\n 3.Multiplication\n 4.Division\n");
        scanf("%d",&opt);
        switch(opt)
        {
           
            int sum,sub,mul,cnt;
            float divi;
            case 1: sum= 0;
                    printf("Enter %d numbers\n", n);
                    for(i=0;i<n;i++)
                    {
                        scanf("%d",&num);
                        sum=sum+num;
                    }
                    printf("sum is %d",sum);
                    printf("\n");
                    break;
            case 2: sub=0,cnt=1;
                    printf("Enter %d numbers\n", n);
                    for(i=0;i<n;i++)
                    {
                        scanf("%d",&num);
                        if(cnt==1)
                        {
                        sub=num-sub;
                        }
                        else
                        {
                            sub=sub-num;
                        }
                        cnt++;
                    }
                    printf("sub is %d\n",sub);
                    break;
            case 3: mul=1;
                    printf("Enter %d numbers\n", n);
                    for(i=0;i<n;i++)
                    {
                        scanf("%d",&num);
                        if(num==0)
                            mul=0;
                        else
                            mul=mul*num;
                    }
                    printf("mul is %d\n",mul);
                    break;
            case 4: divi=1,cnt=1;
                    printf("Enter %d numbers\n", n);
                    for(i=0;i<n;i++)
                    {
                        scanf("%d",&num);
                        if(num==0)
                        {
                            divi=0;
                        }
                        else
                        {
                            if(cnt==1)
                            {
                                divi=num/1;
                            }
                            else
                            {
                                divi=divi/num;
                            }
                        }
                        cnt++;
                    }
                    printf("division is %f\n",divi);
                    break;
                default:printf("Entered invalid option.\n");
                        break;
        }
    }
    return 0;
}
    
