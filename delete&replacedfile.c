#include <stdio.h>
int main(void) {
    FILE *fp1, *fp2;
    //'filename'is a 40 character string to store filename
    char filename[40];
    char c;
    int del_line, temp = 1;
    //asks user for file name
    printf("Enter file name: ");
    //receives file name from user and stores in 'filename'
    scanf("%s", filename);
    fp1 = fopen(filename, "r");
    //open file in read mode
    c = getc(fp1);
    //print the contents of file .
    while (c != EOF) {
        printf("%c", c);
        c = getc(fp1);
    }
    //ask user for line number to be deleted.
    printf(" Enter line number to be deleted and replaced");
    scanf("%d", &del_line);
    //take fp1 to start point.
    rewind(fp1);
    //open copy.c in write mode
    fp2 = fopen("copy.c", "w");
    c = getc(fp1);
while (c != EOF) {
        if (c == ' ') {
            temp++;
        }
        //till the line to be deleted comes,copy the content from one file to other
        if (temp != del_line){
        putc(c, fp2);
        }
        else //when the line to be deleted comes
        {
            while ((c = getc(fp1)) != ' ') {
            }
            //read and skip the line ask for new text
            printf("Enter new text");
            //flush the input stream
            fflush(stdin);
            putc(' ', fp2);  //put '' in new file
            while ((c = getchar()) != ' '){
                putc(c, fp2);
                //take the data from user and place it in new file
                fputs("  ", fp2);
                temp++;
            }
            //continue this till EOF is encountered
            c = getc(fp1);
            }
        //close both files
        fclose(fp1);
        fclose(fp2);
        //remove original file
        remove(filename);
        //rename new file with old name opens the file in read mode
        rename("copy.c", filename);
        fp1 = fopen(filename, "r");
        //reads the character from file
        c = getc(fp1);
        //until last character of file is encountered
        while (c != EOF){
            printf("%c", c);
            //all characters are printed
            c = getc(fp1);
        }
        //close the file pointer
        fclose(fp1);
        return 0;
} 
}
