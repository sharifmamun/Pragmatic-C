#include <stdio.h>
#include <string.h>

#define BUFFERSIZE 50

int main() {
    char input[BUFFERSIZE];
    printf("What's your name?\n");

    /*
        As gets() or scanf() are not safer, which I had used 10 years before
    */
    fgets(input, sizeof input, stdin);

    /*
        And this was the nice thing to learn the simplest way to remove the new
        line from the input
    */
    input[strcspn(input, "\n")] = 0;
    printf("Hello, %s, nice to meet you!", input);

    return 0;
}