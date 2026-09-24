#include <stdio.h>

int maxSubArray(int nums[], int size) {
    int currentSum = nums[0];
    int maxSum = nums[0];

    for (int i = 1; i < size; i++) {
        if (currentSum + nums[i] > nums[i]) {
            currentSum = currentSum + nums[i];
        } else {
            currentSum = nums[i];
        }

        if (currentSum > maxSum) {
            maxSum = currentSum;
        }
    }

    return maxSum;
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
    int nums1[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int size1 = sizeof(nums1) / sizeof(nums1[0]);

    int nums2[] = {1};
    int size2 = sizeof(nums2) / sizeof(nums2[0]);

    printf("Test Case 1:\n");
    printf("Input: ");
    printArray(nums1, size1);
    printf("\nOutput: %d\n\n", maxSubArray(nums1, size1));

    printf("Test Case 2:\n");
    printf("Input: ");
    printArray(nums2, size2);
    printf("\nOutput: %d\n", maxSubArray(nums2, size2));

    return 0;
}