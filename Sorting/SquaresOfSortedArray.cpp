//NO.977  
#include<bits/stdc++.h>
   
std::vector<int> sortedSquares(std::vector<int>& nums) {
    std::vector<int> result;
    for(int i = 0; i<nums.size();i++){
        int square = nums[i] * nums[i];
        result.push_back(square);
    }
    sort(result.begin(),result.end());
    return result;
}