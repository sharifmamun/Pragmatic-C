#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define SIZE 25
int main() {
    char firstNum[SIZE],
         secondNum[SIZE];

    int num1 =0,
        num2=0;

    // Read as string using fgets
    printf("What is the first Number?");
    fgets(firstNum, sizeof firstNum, stdin);
    // Remove the newline from the end
    firstNum[strcspn(firstNum, "\n")] = 0;
    // String to integer conversion
    sscanf(firstNum, "%d", &num1);

    printf("What is the second Number?");
    fgets(secondNum, sizeof secondNum, stdin);
    secondNum[strcspn(secondNum, "\n")] = 0;
    sscanf(secondNum, "%d", &num2);

    if (num1 == 0) {
        fprintf(stderr, "Error reading name.\n");
        exit(1);
    }

    // Can't handle integer overflow
    // if ((num1*num2) / num1 != num2) {
    //     printf("Hello buddy\n");
    //     printf("%d * %d = %d\n", num1, num2, num1*num2);
    // }

    printf("%d + %d = %d\r\n%d - %d = %d\r\n%d * %d = %d\n%d / %d = %d\n",
            num1, num2, num1+num2,
            num1, num2, num1-num2,
            num1, num2, num1*num2,
            num1, num2, num1/num2);

    return 0;
}