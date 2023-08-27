/*2535. Difference Between Element Sum and Digit Sum of an Array
You are given a positive integer array nums.
The element sum is the sum of all the elements in nums.
The digit sum is the sum of all the digits (not necessarily distinct) that appear in nums.
Return the absolute difference between the element sum and digit sum of nums.
Note that the absolute difference between two integers x and y is defined as |x - y|.*/

#include <iostream>
#include <cmath>
#include <vector>

int differenceOfSum(std::vector<int>& nums) {
    int elmntSum{0}, digitSum{0};
    for(auto x : nums){
        elmntSum += x;

        int digit{0};
        while(x > 0){
            digit = x%10;
             x /= 10;
            digitSum += digit;
        }
    }
    return std::abs(elmntSum-digitSum);
}

 