#include <stdio.h>

//Given an array nums of size n, return the majority element.

//The majority element appears more than ⌊n/2⌋ times.
//You may assume the majority element always exists in the array.

//Example 1:
//Input: nums = [3,2,3]
//Output: 3

//Example 2:
//Input: nums = [2,2,1,1,1,2,2]
//Output: 2


int majorityElement(int* nums, int numsSize) {
     int example = 0;
     int count = 0;

     for (int i = 0; i < numsSize; i++) {
          if(count ==0) {
               example = nums[i];
               count = 1;
          } else if (nums[i] == example) {
               count++;
          } else {
               count--;
          }
     }
     return example;
}
int main() {
     int nums1[] = {3, 2, 3};
     int size1 = sizeof(nums1) / sizeof(nums1[0]);

     int nums2[] = {2, 2, 1, 1, 1, 2, 2};
     int size2 = sizeof(nums2) / sizeof(nums2[0]);

     int output1 = majorityElement(nums1, size1);
     int output2 = majorityElement(nums2, size2);

     printf("Example1: %d\n", output1);
     printf("Example2: %d\n", output2);

     return 0;
}
