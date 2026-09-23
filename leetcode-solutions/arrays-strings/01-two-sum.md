\#include <stdlib.h>



int\* twoSum(int\* nums, int numsSize, int target, int\* returnSize) {

&#x20;   int\* result = malloc(2 \* sizeof(int));



&#x20;   for (int i = 0; i < numsSize; i++) {

&#x20;       for (int j = i + 1; j < numsSize; j++) {

&#x20;           if (nums\[i] + nums\[j] == target) {

&#x20;               result\[0] = i;

&#x20;               result\[1] = j;

&#x20;               \*returnSize = 2;

&#x20;               return result;

&#x20;           }

&#x20;       }

&#x20;   }



&#x20;   \*returnSize = 0;

&#x20;   free(result);

&#x20;   return NULL;

}

