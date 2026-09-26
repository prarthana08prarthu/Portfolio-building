int main() {
    // Test Case 1 - Typical case
    int nums1[] = {0, 1, 0, 3, 12};
    int size1 = sizeof(nums1) / sizeof(nums1[0]);

    printf("Test Case 1:\n");
    printf("Input: ");
    printArray(nums1, size1);

    moveZeroes(nums1, size1);

    printf("Output: ");
    printArray(nums1, size1);

    // Test Case 2 - Edge case with all zeroes
    int nums2[] = {0, 0, 0};
    int size2 = sizeof(nums2) / sizeof(nums2[0]);

    printf("\nTest Case 2:\n");
    printf("Input: ");
    printArray(nums2, size2);

    moveZeroes(nums2, size2);

    printf("Output: ");
    printArray(nums2, size2);

    return 0;
}