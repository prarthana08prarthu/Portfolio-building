#include <stdio.h>

int maxProfit(int prices[], int size) {
    int minPrice = prices[0];
    int maxProfit = 0;

    for (int i = 1; i < size; i++) {
        if (prices[i] < minPrice) {
            minPrice = prices[i];
        }

        int profit = prices[i] - minPrice;

        if (profit > maxProfit) {
            maxProfit = profit;
        }
    }

    return maxProfit;
}

void printArray(int prices[], int size) {
    printf("[");
    for (int i = 0; i < size; i++) {
        printf("%d", prices[i]);
        if (i < size - 1) {
            printf(", ");
        }
    }
    printf("]");
}

int main() {
    int prices1[] = {7, 1, 5, 3, 6, 4};
    int size1 = sizeof(prices1) / sizeof(prices1[0]);

    int prices2[] = {7, 6, 4, 3, 1};
    int size2 = sizeof(prices2) / sizeof(prices2[0]);

    printf("Test Case 1:\n");
    printf("Input: ");
    printArray(prices1, size1);
    printf("\nOutput: %d\n\n", maxProfit(prices1, size1));

    printf("Test Case 2:\n");
    printf("Input: ");
    printArray(prices2, size2);
    printf("\nOutput: %d\n", maxProfit(prices2, size2));

    return 0;
}