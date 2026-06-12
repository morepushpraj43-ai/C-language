#include <stdio.h>

int main() {
    int b;
    char ch = 'd';
    ch = 'n';
    b = '\n'; // represents a neew line
    printf("how are you \ni am good");
    printf("\nhow are you \ti am good");
    printf("how are you \\ni am good\n %c and %c\n", b, ch);
    printf("he said, \"He!\"\n");

    printf("This is \'single quotes\'\n");
    printf("This is \"double quotes\"\n");
    printf("This is \\backslash\n");
    printf("This is \0null\n");
    printf("This is \abell\n");
    printf("This is \bbackspace\n");
    printf("This is \ffeed\n");
    printf("This is new line\n");
    printf("This is \rcarriege\n");
    printf("This is \thorizental tab\n");
    printf("This is \vvertical tab\n");
    return 0;
}