/*2656. Maximum Sum With Exactly K Elements 

You are given a 0-indexed integer array nums and an integer k.
Your task is to perform the following operation exactly k times in order to maximize your score:
Select an element m from nums.
Remove the selected element m from the array.
Add a new element with a value of m + 1 to the array.
Increase your score by m.
Return the maximum score you can achieve after performing the operation exactly k times.
*/ 

#include <iostream>
#include <vector>
#include <algorithm>

int maximizeSum(std::vector<int>& nums, int k) {
    int size = nums.size();
    int sum{0}, count{0};
    sort(nums.begin(), nums.end());
    int lastDigit = nums[size-1];
        
    while(count < k){
        sum += lastDigit;
        nums.pop_back();
        nums.push_back(lastDigit++);
        count++;
    }
    return sum;
}