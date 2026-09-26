#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool isValid(char s[]) {
    char stack[10000];
    int top = -1;

    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == '(' || s[i] == '[' || s[i] == '{') {
            stack[++top] = s[i];
        } else {
            if (top == -1) {
                return false;
            }

            char topChar = stack[top--];

            if ((s[i] == ')' && topChar != '(') ||
                (s[i] == ']' && topChar != '[') ||
                (s[i] == '}' && topChar != '{')) {
                return false;
            }
        }
    }

    return top == -1;
}

int main() {
    char s1[] = "()[]{}";
    char s2[] = "(]";

    printf("Test Case 1:\n");
    printf("Input: %s\n", s1);
    printf("Output: %s\n\n", isValid(s1) ? "true" : "false");

    printf("Test Case 2:\n");
    printf("Input: %s\n", s2);
    printf("Output: %s\n", isValid(s2) ? "true" : "false");

    return 0;
}