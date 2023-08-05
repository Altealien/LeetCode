// No.1512
#include <iostream>
#include <vector>

int numIdenticalPairs(std::vector<int>& nums) {
    int count{0};
    for(int i =0; i<nums.size();i++){
        for(int j = 1; j<nums.size();j++){
            if (nums[i] == nums[j] && i<j){
                count++;
            }
        }
    }
    return count;
}

int main(){
    std::vector<int> nums = {1,2,3,1,1,3};
    std::cout << numIdenticalPairs(nums);
}