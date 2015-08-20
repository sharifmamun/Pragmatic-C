#include <stdio.h>
#include <time.h>
#include <string.h>

#define SIZE 25
int main(int argc, char const *argv[])
{
    char firstNum[SIZE], secondNum[SIZE], buffer[SIZE];

    int num1=0, num2=0, num3=0;

    printf("What is your current age? ");
    fgets(firstNum, sizeof firstNum, stdin);
    firstNum[strcspn(firstNum, "\n")] = 0;
    sscanf(firstNum, "%d", &num1);

    printf("At what age would you like to retire? ");
    fgets(secondNum, sizeof secondNum, stdin);
    secondNum[strcspn(secondNum, "\n")] = 0;
    sscanf(secondNum, "%d", &num2);

    if (num2>=num1) {
        printf("You have %d years left until you can retire.\n", num2-num1);
    } else {
        printf("You entered wrong input\n");
    }

    // How to get the system current time
    // and convert it to Year or any other format
    time_t now = time(0);
    struct tm* tm_info;
    time(&now);
    tm_info = localtime(&now);

    strftime(buffer, 26, "%Y", tm_info);
    sscanf(buffer, "%d", &num3);
    printf("It's %d, so you can retire in %d\n", num3, num3 + (num2-num1));

    return 0;
}