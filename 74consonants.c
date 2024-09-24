#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp;
    char ch;
    int consonantCount = 0;

    fp = fopen("file.txt", "r");

    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF) {
        ch = tolower(ch); 
        if (isalpha(ch) && !isvowel(ch)) {
            consonantCount++;
        }
    }

    fclose(fp);

    printf("Number of consonants: %d\n", consonantCount);

    return 0;
}