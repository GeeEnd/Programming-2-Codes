#include <stdio.h>

int main()
/* Ask for a filename and count number of lines in the file*/{
    //a pointer to a FILE structure
    FILE *fp;
    int no_lines = 0;
    //consider 40 character string to store filename
    char filename[40], sample_chr;
    //asks user for file name
    printf("Enter file name: ");
    //receives file name from user and stores in a string named 'filename'
    scanf("%s", filename);
    //open file in read mode
    fp = fopen(filename, "r");
    //get character from file and store in sample_chr
    sample_chr = getc(fp);
    
    while (sample_chr != EOF) {
        //Count whenever sample_chr is blank (new line) is encountered
        if (sample_chr == ' ')
        {    
            //increment variable 'no_lines' by 1
            no_lines=no_lines+1;
        }
        //take next character from file.
        sample_chr = getc(fp);
    }
    fclose(fp); //close file.
    printf("There are %d lines in %s ", no_lines, filename);
    return 0;
}
