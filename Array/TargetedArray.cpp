//NO.1389
#include <iostream>
#include <vector>

std::vector<int> createTargetArray(std::vector<int>& nums, std::vector<int>& index) {
    std::vector<int> answer;
    for(int i=0; i<nums.size();++i){
        answer.insert(answer.begin()+index[i], nums[i]);
    }
    return answer;
}