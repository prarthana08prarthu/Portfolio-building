#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int containsDuplicate(int nums[], int size) {
    qsort(nums, size, sizeof(int), compare);

    for (int i = 1; i < size; i++) {
        if (nums[i] == nums[i - 1]) {
            return 1;
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
