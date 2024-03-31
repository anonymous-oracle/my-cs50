#include <stdio.h>
#include <string.h>
#define MAX_LIMIT 1024

int main(void) {
    char answer[MAX_LIMIT];
    printf("Who are you?\n");
    scanf("%s[^\n]", answer);
    printf("Hello %s\n", answer);
    return 0;

}