/*2574. Left and Right Sum Differences
Given a 0-indexed integer array nums, find a 0-indexed integer array answer where:
answer.length == nums.length.
answer[i] = |leftSum[i] - rightSum[i]|.
Where:
leftSum[i] is the sum of elements to the left of the index i in the array nums. 
If there is no such element, leftSum[i] = 0.
rightSum[i] is the sum of elements to the right of the index i in the array nums. 
If there is no such element, rightSum[i] = 0.
Return the array answer.*/

#include <iostream>
#include <vector>

std::vector<int> leftRightDifference(std::vector<int>& nums) {
    std::vector<int> leftSum, rightSum, result;
    int sum{0};
    for(int i=0; i< nums.size(); i++){
        leftSum.push_back(sum);
        sum += nums[i];
    }
    sum =0;
    for(int i = nums.size()-1;i>=0;i--){
        rightSum.push_back(sum);
        sum += nums[i];
    }
    int j = nums.size()-1;
    for(int i = 0; i<nums.size(); i++){
        int diff = std::abs(leftSum[i]-rightSum[j]);
        result.push_back(diff);
        j--;
    }
    return result;
}

int main(){
    std::vector<int> nums{10,4,8,3};
    std::vector<int> result = leftRightDifference(nums);
    std::cout << "[";
    for (size_t i = 0; i < result.size(); i++) {
        std::cout << result[i];
        if (i != result.size() - 1) {
            std::cout << ",";
        }
    }
    std::cout << "]" << std::endl;
}