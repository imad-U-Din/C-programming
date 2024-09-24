#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp;
    char ch;
    int punctuationCount = 0;

    fp = fopen("file.txt", "r");

    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF) {
        if (ispunct(ch)) {
            punctuationCount++;
        }
    }

    fclose(fp);

    printf("Number of punctuation marks: %d\n", punctuationCount);

    return 0;
}