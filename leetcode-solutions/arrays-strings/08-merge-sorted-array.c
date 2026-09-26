#include <stdio.h>

void merge(int nums1[], int m, int nums2[], int n) {
    int i = m - 1;
    int j = n - 1;
    int k = m + n - 1;

    while (i >= 0 && j >= 0) {
        if (nums1[i] > nums2[j]) {
            nums1[k] = nums1[i];
            i--;
        } else {
            nums1[k] = nums2[j];
            j--;
        }
        k--;
    }

    while (j >= 0) {
        nums1[k] = nums2[j];
        j--;
        k--;
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
    printf("]");
}

int main() {
    // Test Case 1 - Typical case
    int nums1[] = {1, 2, 3, 0, 0, 0};
    int nums2[] = {2, 5, 6};

    int m1 = 3;
    int n1 = 3;

    merge(nums1, m1, nums2, n1);

    printf("Test Case 1:\n");
    printf("nums1: ");
    printArray(nums1, m1 + n1);
    printf("\n\n");

    // Test Case 2 - Edge case where nums2 is empty
    int nums3[] = {1};
    int nums4[] = {};

    int m2 = 1;
    int n2 = 0;

    merge(nums3, m2, nums4, n2);

    printf("Test Case 2:\n");
    printf("nums1: ");
    printArray(nums3, m2 + n2);
    printf("\n");

    return 0;
}