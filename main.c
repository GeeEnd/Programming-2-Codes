#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    FILE * text;
    char char1[200], char2[200], char3;
    int line, i;

    printf("Input the file location : ");
    scanf("%s", char1);

    text = fopen (char1, "a");
    if (text == NULL) {
        printf("Null sya Megoy");
        exit(1);
    }

    printf("Input how many lines to be appended : ");
    scanf(" %d", &line);

    //scan and counts text appended
    for (i = 0; i < line; i++) {
        scanf("%s", char2);
        fprintf(text, "%s\n", char2);
    }
    fclose(text); //close file pointer

    //open again
    text = fopen (char1, "r");
    char3 = fgetc(text);

    printf("\n\nInside of the %s\n", char1);
    while (char3 != EOF) {
        printf("%c", char3);
        char3 = fgetc(text);
    }

    fclose(text);
    return 0;
}
