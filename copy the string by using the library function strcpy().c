#include<stdio.h>
#include<string.h>    

main()
{
    char source[] = "C Program";    
    char destination[50];    
    strcpy(destination, source);    
    printf("Source string: %s\n", source);    
    printf("Destination string: %s\n", destination);    
    return 0;
}
