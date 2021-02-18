#include <stdio.h>

int main()
{
    int num; // 'num' variable to hold decimal number
    int bin_arr[100]; // array to hold binary value
    int i=0; // counter to iterate/index array elements
    
    printf("Enter decimal number:"); 
    scanf("%d", &num); // Read number into 'num'
    while(num){ // loop until num isn't 0
      bin_arr[i] = num%2; // num%2 will give single digit of binary 
      num = num/2; // divide num by 2 to get next digit of binary
      i++;  // increment conuter to hold in next array element
    }

    printf("Binary number: ");
    while(i--){ // iterate over array from large index to 0
      printf("%d", bin_arr[i]); // print individual binary digits
    }
    return 0;
}

    
