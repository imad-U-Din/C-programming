#include <stdio.h>

int main() {
    FILE *fp;
    char ch;
    int sentenceCount = 0;

    fp = fopen("file.txt", "r");

    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF) {
        if (ch == '.' || ch == '?' || ch == '!') {
            sentenceCount++;
        }
    }

    fclose(fp);

    printf("Number of sentences: %d\n", sentenceCount);

    return 0;
}