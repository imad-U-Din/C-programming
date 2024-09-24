#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp;
    char ch;
    int wordCount = 0, inWord = 0;

    fp = fopen("file.txt", "r"); 

    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF) {
        if (isspace(ch)) {
            inWord = 0;
        } else {
            if (!inWord) {
                wordCount++;
                inWord = 1;
            }
        }
    }

    fclose(fp);

    printf("Number of words: %d\n", wordCount);

    return 0;
}