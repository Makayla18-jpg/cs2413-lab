#include <stdio.h>
#include <stdlib.h>

//You are given a large integer represented as an integer array digits, where:

//digits[i] is the i-th digit of the integer
//digits are ordered from most significant to least significant
//there are no leading 0s (except the number 0 itself in some of our tests)
//Goal: Add 1 to the number and return the resulting digits array.

//Example 1:
//Input: digits = [4,3,2,1]
//Output: [4,3,2,2]
//Explanation: The array represents the integer 4321.
//Incrementing by one gives 4321 + 1 = 4322.
//Thus, the result should be [4,3,2,2].

//Example 2:
//Input: digits = [9]
//Output: [1,0]
//Explanation: The array represents the integer 9.
//Incrementing by one gives 9 + 1 = 10.
//Thus, the result should be [1,0].

//Return value (int*): the output digits array.
//Output parameter (returnSize): set *returnSize to the number of digits in the returned array.

int* plusOne(int* digits, int digitsSize, int* returnSize) {
    for (int i = digitsSize - 1; i >= 0; i--) {
        if (digits[i] < 9) {
            digits[i] += 1;
            *returnSize = digitsSize;
            return digits;
        }
        digits[i] = 0;
    }
    int* output = (int*)malloc(sizeof(int) * (digitsSize + 1));
    output[0] = 1;
    for (int i = 1; i <= digitsSize; i++) {
        output[i] = 0;
    }
    *returnSize = digitsSize + 1;
    return output;
}
int main() {
    int digits1[] = {4, 3, 2, 1};
    int size1 = sizeof(digits1) / sizeof(digits1[0]);
    int returnSize1 = 0;

    int* output1 = plusOne(digits1, size1, &returnSize1);
    printf("Example 1 output is: ");

    for (int i = 0; i < returnSize1; i++) {
        printf("%d ", output1[i]);
    }
    printf("\n");

    
    
    int digits[] = {9};
    int returnSize = 0;

    int* output = plusOne(digits, 1, &returnSize);

    if (output == NULL) {
        printf("Failed");
        return 1;
    }

    for (int i = 0; i < returnSize; i++) {
        printf("%d ", output[i]);
    }
    printf("\n");

    if (output != digits) {
        free(output);
    }
    return 0;
}

