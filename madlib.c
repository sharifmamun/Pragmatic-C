#include <stdio.h>
#include <string.h>

#define SIZE 25
int main() {
    char noun[SIZE],
         verb[SIZE],
         adjective[SIZE],
         adverb[SIZE];

    printf("Enter a noun: ");
    fgets(noun, sizeof noun, stdin);
    noun[strcspn(noun, "\n")] = 0;

    printf("Enter a verb: ");
    fgets(verb, sizeof verb, stdin);
    verb[strcspn(verb, "\n")] = 0;

    printf("Enter an adjective: ");
    fgets(adjective, sizeof adjective, stdin);
    adjective[strcspn(adjective, "\n")] = 0;

    printf("Enter a adverb: ");
    fgets(adverb, sizeof adverb, stdin);
    adverb[strcspn(adverb, "\n")] = 0;

    printf("Do you %s your %s %s %s? That's hillarious\n", verb, adjective, noun, adverb);

    return 0;
}