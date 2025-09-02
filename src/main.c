// a simple cat command implementation

#include <stdio.h>

int main(int argc,char *argv[])
{
    FILE* file;
    char ch;
    // open a file
    file = fopen(argv[1], "r");
    if (file == NULL) {
        printf("Error: cannot open file\n");
        return 1;
    }
    // read a file
    while(1) {
        ch = fgetc(file);
        if (ch == EOF)
            break;
        printf("%c", ch);
    }
    printf("\n");
    fclose(file);
}
