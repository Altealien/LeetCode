/*
1913. Maximum Product Difference Between Two Pairs
The product difference between two pairs (a, b) and (c, d) is defined as (a * b) - (c * d).

For example, the product difference between (5, 6) and (2, 7) is (5 * 6) - (2 * 7) = 16.
Given an integer array nums, choose four distinct indices w, x, y, and z such that the product difference 
between pairs (nums[w], nums[x]) and (nums[y], nums[z]) is maximized.

Return the maximum such product difference.*/

#include <iostream>
#include <vector>
#include <algorithm>

int maxProductDifference(std::vector<int>& nums); 

int main(){
    std::vector<int> nums = {5,6,2,7,4};
    std::cout << maxProductDifference(nums) << std::endl;
}

int maxProductDifference(std::vector<int>& nums) {
    sort(nums.begin(), nums.end());
    int lastIndex = nums.size() -1;
    return (nums[lastIndex]*nums[lastIndex-1]) - (nums[0]*nums[1]);
}