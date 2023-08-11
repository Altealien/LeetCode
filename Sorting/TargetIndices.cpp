/*2089. Find Target Indices After Sorting Array
You are given a 0-indexed integer array nums and a target element target.
A target index is an index i such that nums[i] == target.
Return a list of the target indices of nums after sorting nums in non-decreasing order. 
If there are no target indices, return an empty list. The returned list must be sorted in increasing order.*/


#include <bits/stdc++.h>

std::vector<int> targetIndices(std::vector<int>& nums, int target) {
    std::vector<int> result;
    sort(nums.begin(),nums.end());

    for(int i =0; i<nums.size();i++){
        if(nums[i] == target){
            result.push_back(i);
        }
    }
    return result;
}