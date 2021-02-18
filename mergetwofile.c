#include<stdio.h>
#include<stdlib.h>

int main()
{

    FILE *fs1, *fs2, *ft;    
    char ch, file1[20], file2[20], file3[20];
    
    printf("Enter name of first file\n");    
    gets(file1);
    
    printf("Enter name of second file\n");    
    gets(file2);
    
    printf("Enter name of file which will store contents of two files\n");    
    gets(file3);
    
    fs1 = fopen(file1,"r");    
    fs2 = fopen(file2,"r");
    
    if( fs1 == NULL || fs2 == NULL )
    {
        perror("Error ");
        
        printf("Press any key to exit...\n");        
      
        exit(EXIT_FAILURE);
    }
    
    ft = fopen(file3,"w");
    
    if( ft == NULL )
    {
        perror("Error ");
        
        printf("Press any key to exit...\n");
        
        exit(EXIT_FAILURE);
    }
    
    while( ( ch = fgetc(fs1) ) != EOF )    
    fputc(ch,ft);
    
    while( ( ch = fgetc(fs2) ) != EOF )    
    fputc(ch,ft);
    
    printf("Two files were merged into %s file successfully.\n",file3);
    
    fclose(fs1);    
    fclose(fs2);    
    fclose(ft);
    
    return 0;
}
