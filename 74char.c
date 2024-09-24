#include <stdio.h>

int main() {
    FILE *fp;
    char ch;
    int count = 0;

    fp = fopen("file.txt", "r"); 

    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF) {
        count++;
    }

    fclose(fp);

    printf("Number of characters: %d\n", count);

    return 0;
}