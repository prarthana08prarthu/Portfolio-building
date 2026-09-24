#include <stdio.h>

int containsDuplicate(int nums[], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (nums[i] == nums[j]) {
                return 1;
            }
        }
    }

    return 0;
}

void printArray(int nums[], int size) {
    printf("[");
    for (int i = 0; i < size; i++) {
        printf("%d", nums[i]);
        if (i < size - 1) {
            printf(", ");
        }
    }
    printf("]");
}

int main() {
    int nums1[] = {1, 2, 3, 1};
    int size1 = sizeof(nums1) / sizeof(nums1[0]);

    int nums2[] = {1, 2, 3, 4};
    int size2 = sizeof(nums2) / sizeof(nums2[0]);

    printf("Test Case 1:\n");
    printf("Input: ");
    printArray(nums1, size1);
    printf("\nOutput: %s\n\n",
           containsDuplicate(nums1, size1) ? "true" : "false");

    printf("Test Case 2:\n");
    printf("Input: ");
    printArray(nums2, size2);
    printf("\nOutput: %s\n",
           containsDuplicate(nums2, size2) ? "true" : "false");

    return 0;
}