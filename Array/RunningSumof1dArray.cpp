//NO.1480

#include <iostream>
#include <vector>

std::vector<int> runningSum(std::vector<int>& nums) {
    std::vector<int> summedArray;
    int sum{0};
    for(int i =0; i<nums.size();i++){
        sum +=nums[i];
        summedArray.push_back(sum);
    }
    return summedArray;
}