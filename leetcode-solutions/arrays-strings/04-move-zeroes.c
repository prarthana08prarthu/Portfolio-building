#include <stdio.h>

void moveZeroes(int nums[], int size) {
    int position = 0;

    // Move all non-zero elements to the front
    for (int i = 0; i < size; i++) {
        if (nums[i] != 0) {
            nums[position] = nums[i];
            position++;
        }
    }

    // Fill the remaining positions with zero
    while (position < size) {
        nums[position] = 0;
        position++;
    }
}

void printArray(int nums[], int size) {
    printf("[");
    for (int i = 0; i < size; i++) {
        printf("%d", nums[i]);
        if (i < size - 1) {
            printf(", ");
        }
    }
    printf("]\n");
}

int main() {
    int nums[] = {0, 1, 0, 3, 12};
    int size = sizeof(nums) / sizeof(nums[0]);

    printf("Test Case 1:\n");
    printf("Input: ");
    printArray(nums, size);

    moveZeroes(nums, size);

    printf("Output: ");
    printArray(nums, size);

    return 0;
}