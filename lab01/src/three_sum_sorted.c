#include <stdio.h>

int three_sum_zero_sorted_one(const int* nums, int n, int* out_i, int* out_j, int* out_k) {
    for (int i = 0; i < n - 2; i++) {
        int L = i + 1;
        int R = n - 1;

        while (L < R) {
            int sum = nums[i] + nums[L] + nums[R];
            if (sum == 0) {
                *out_i = i;
                *out_j = L;
                *out_k = R;

                return 1;
            } else if (sum < 0) {
                L++;
            } else {
                R--;
            }
        }
    }
    return 0;
    //
}
int main() {
    int nums[] = {-4, -1, -1, 0, 1, 2};
    int n = 6;
    int i, j, k;

    if (three_sum_zero_sorted_one(nums, n, &i, &j, &k)) {
        printf("indices: (%d, %d, %d) because %d + %d + %d = 0\n", i, j, k, nums[i], nums[j], nums[k]);
    } else {
        printf("Error\n");
    }
    return 0;
}
