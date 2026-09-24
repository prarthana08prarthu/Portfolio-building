#include <stdio.h>
#include <string.h>

/*
    Reverse String

    Given a string, reverse the string in-place.
*/

void reverseString(char s[], int size) {
    int left = 0;
    int right = size - 1;

    while (left < right) {
        char temp = s[left];
        s[left] = s[right];
        s[right] = temp;

        left++;
        right--;
    }
}

int main() {

    // Test Case 1 - Typical case
    char str1[] = "hello";

    reverseString(str1, strlen(str1));

    printf("Test Case 1:\n");
    printf("Input: hello\n");
    printf("Output: %s\n\n", str1);

    // Test Case 2 - Edge case with a single character
    char str2[] = "a";

    reverseString(str2, strlen(str2));

    printf("Test Case 2:\n");
    printf("Input: a\n");
    printf("Output: %s\n", str2);

    return 0;
}