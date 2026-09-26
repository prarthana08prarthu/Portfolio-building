#include <stdio.h>
#include <string.h>

void longestCommonPrefix(char *strs[], int strsSize, char result[]) {
    if (strsSize == 0) {
        result[0] = '\0';
        return;
    }

    int prefixLength = strlen(strs[0]);

    for (int i = 1; i < strsSize; i++) {
        int j = 0;

        while (j < prefixLength &&
               strs[0][j] != '\0' &&
               strs[0][j] == strs[i][j]) {
            j++;
        }

        prefixLength = j;
    }

    strncpy(result, strs[0], prefixLength);
    result[prefixLength] = '\0';
}

int main() {
    char *strs1[] = {"flower", "flow", "flight"};
    char result1[100];

    char *strs2[] = {"dog", "racecar", "car"};
    char result2[100];

    printf("Test Case 1:\n");
    printf("Input: [\"flower\", \"flow\", \"flight\"]\n");

    longestCommonPrefix(strs1, 3, result1);
    printf("Output: \"%s\"\n\n", result1);

    printf("Test Case 2:\n");
    printf("Input: [\"dog\", \"racecar\", \"car\"]\n");

    longestCommonPrefix(strs2, 3, result2);
    printf("Output: \"%s\"\n", result2);

    return 0;
}