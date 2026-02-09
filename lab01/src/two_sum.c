#include <stdio.h>

int two_sum(const int* nums, int n, int target, int* out_i, int* out_j) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (nums[i] + nums[j] == target) {
                *out_i = i;
                *out_j = j;
            
                return 1;
            } 
        }
    }
    return 0;
}

int main() {
    int nums[] = {2, 7, 11, 15};
    int target = 9;
    int i, j;

    if (two_sum(nums, 4, target, &i, &j)) {
        printf("indices: (%d, %d) because %d + %d = %d\n", i, j, nums[i], nums[j], target);
    } else {
        printf("Error\n");
    }
    return 0;
}
