#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isPalindrome(char str[]) {
    int left = 0;
    int right = strlen(str) - 1;

    while (left < right) {
        while (left < right && !isalnum(str[left])) {
            left++;
        }

        while (left < right && !isalnum(str[right])) {
            right--;
        }

        if (tolower(str[left]) != tolower(str[right])) {
            return 0;
        }

        left++;
        right--;
    }

    return 1;
}

int main() {
    char str1[] = "A man, a plan, a canal: Panama";
    char str2[] = "race a car";

    printf("Test Case 1:\n");
    printf("Input: %s\n", str1);
    printf("Output: %s\n\n", isPalindrome(str1) ? "true" : "false");

    printf("Test Case 2:\n");
    printf("Input: %s\n", str2);
    printf("Output: %s\n", isPalindrome(str2) ? "true" : "false");

    return 0;
}