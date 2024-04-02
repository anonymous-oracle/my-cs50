#include <stdio.h>
#include <string.h>

int main(void){
    int n=0;
    printf("Enter a positive number: ");
    scanf("%d", &n);
    // do { // this will increase n by 1 because of do-while
    //     n++;
    // } while (n < 2); // ensures a positive number greater than 1

    while(n<1){
        n++;
    }
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