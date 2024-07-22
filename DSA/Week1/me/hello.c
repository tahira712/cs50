#include <stdio.h>
#include <cs50.h>

int main() {
    string answer = get_string("What's your kname? \n");
    printf("hello, %s\n", answer);
    printf("\n");
    return 0;
}
