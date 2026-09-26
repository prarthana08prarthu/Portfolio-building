#include <stdio.h>
#include <stdlib.h>

struct ListNode {
    int val;
    struct ListNode *next;
};

struct ListNode* reverseList(struct ListNode* head) {
    struct ListNode *prev = NULL;
    struct ListNode *current = head;

    while (current != NULL) {
        struct ListNode *nextNode = current->next;
        current->next = prev;
        prev = current;
        current = nextNode;
    }

    return prev;
}

void printList(struct ListNode *head) {
    while (head != NULL) {
        printf("%d", head->val);

        if (head->next != NULL) {
            printf(" -> ");
        }

        head = head->next;
    }

    printf("\n");
}

int main() {
    // Test Case 1: Typical case
    struct ListNode node1 = {1, NULL};
    struct ListNode node2 = {2, NULL};
    struct ListNode node3 = {3, NULL};
    struct ListNode node4 = {4, NULL};
    struct ListNode node5 = {5, NULL};

    node1.next = &node2;
    node2.next = &node3;
    node3.next = &node4;
    node4.next = &node5;

    printf("Test Case 1:\n");
    printf("Input: 1 -> 2 -> 3 -> 4 -> 5\n");
    printf("Output: ");

    struct ListNode *reversed1 = reverseList(&node1);
    printList(reversed1);

    // Test Case 2: Edge case - single node
    struct ListNode singleNode = {42, NULL};

    printf("\nTest Case 2:\n");
    printf("Input: 42\n");
    printf("Output: ");

    struct ListNode *reversed2 = reverseList(&singleNode);
    printList(reversed2);

    return 0;
}