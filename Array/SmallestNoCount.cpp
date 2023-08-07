//No.1365
#include <iostream>
#include <vector>

std::vector<int> smallerNumbersThanCurrent(std::vector<int>& nums) {
    std::vector<int> newArray;
    int count{0};
    for(int i =0; i< nums.size();i++){
        count =0;
        for(int j=0; j< nums.size(); j++){
            if(nums[i]> nums[j] && j!=i){
                    count++;
                }
            }
            newArray.push_back(count);
        }
    return newArray;
}