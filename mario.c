#include <stdio.h>
#include <string.h>

int main(void){
    int n=-10;
    // printf("Enter a positive number: ");
    do {
        n++;
    } while (n < 2); // ensures a positive number greater than 2

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("#");
        }
        printf("\n");
    }
    

    return 0;
}