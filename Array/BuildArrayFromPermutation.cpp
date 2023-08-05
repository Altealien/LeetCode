//No.1920
#include <iostream>
#include <vector>
/*Given a zero-based permutation nums (0-indexed), 
build an array ans of the same length where ans[i] = nums[nums[i]] 
for each 0 <= i < nums.length and return it.
A zero-based permutation nums is an array of distinct integers from 0 to nums.length - 1 (inclusive).*/


std::vector<int> buildArray(std::vector<int>& nums) {
    std::vector<int> newArray(nums.size());
    for(int i=0; i< nums.size();i++){
        newArray[i] = nums[nums[i]];
    }
    return newArray;
}

int main(){
    std::vector<int> myVector = {0,2,3,1,4,5};
    std::vector<int> newVector = buildArray(myVector);
    std::cout << "[";
    for (size_t i = 0; i < newVector.size(); i++) {
        std::cout << newVector[i];
        if (i != newVector.size() - 1) {
            std::cout << ",";
        }
    }
    std::cout << "]" << std::endl;
}