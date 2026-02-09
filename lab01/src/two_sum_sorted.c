#include <stdio.h>

int two_sum_sorted(const int* nums, int n, int target, int* out_i, int* out_j) {
    if (!nums || !out_i || !out_j || n < 2) return 0;

    int i = 0;
    int j = n - 1;

    while (i < j) {
        int sum = nums[i] + nums[j];
        if (sum == target) {
            *out_i = i;
            *out_j = j;

            return 1;
        } else if (sum < target) {
            
            i++;
        } else {
            j--;
        }
    }

    return 0;
}
int main() {
    int nums[] = {2, 6, 7, 11, 15};
    
    int target = 9;
    int i, j;

    if (two_sum_sorted(nums, 5, target, &i, &j)) {
        printf("indices: (%d, %d) because %d + %d = %d\n", i, j, nums[i], nums[j], target);
    } else {
        printf("Error\n");
    }
    return 0;
}


