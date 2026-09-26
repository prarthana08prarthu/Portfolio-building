#include <stdio.h>

int search(int nums[], int size, int target) {
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (nums[mid] == target) {
            return mid;
        }

        if (nums[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return -1;
}

int main() {
    int nums1[] = {-1, 0, 3, 5, 9, 12};
    int target1 = 9;

    int nums2[] = {-1, 0, 3, 5, 9, 12};
    int target2 = 2;

    printf("Test Case 1:\n");
    printf("Input: target = %d\n", target1);
    printf("Output: %d\n\n", search(nums1, 6, target1));

    printf("Test Case 2:\n");
    printf("Input: target = %d\n", target2);
    printf("Output: %d\n", search(nums2, 6, target2));

    return 0;
}