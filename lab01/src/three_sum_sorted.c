#include "three_sum_sorted.h"

int three_sum_zero_sorted_one(const int* nums, int n, int* out_i, int* out_j, int* out_k) {
    if (nums == NULL || n < 3) 
    {
        return 0;
    }

    for (int i = 0; i < n - 2; i++) {
        int left = i + 1;
        int right = n - 1;

        while (left < right) {
            long long sum = (long long)nums[i] + nums[left] + nums[right];

            if (sum == 0) {
                *out_i = i;
                *out_j = left;
                *out_k = right;
                return 1; // Success
            } 
            else if (sum < 0) {
                left++; // Increase the sum
            } 
            else {
                right--; // Decrease the sum
            }
        }
    }

    return 0; // No triplet found
}
    return 0;
}
