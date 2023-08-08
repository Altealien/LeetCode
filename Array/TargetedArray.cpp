//NO.1389
/*Given two arrays of integers nums and index. Your task is to create target array under the following rules:
Initially target array is empty.
From left to right read nums[i] and index[i], insert at index index[i] the value nums[i] in target array.
Repeat the previous step until there are no elements to read in nums and index.
Return the target array.*/

#include <iostream>
#include <vector>

std::vector<int> createTargetArray(std::vector<int>& nums, std::vector<int>& index) {
    std::vector<int> answer;
    for(int i=0; i<nums.size();++i){
        answer.insert(answer.begin()+index[i], nums[i]);
    }
    return answer;
}