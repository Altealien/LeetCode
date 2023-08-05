//No.1
#include <iostream>
#include <vector>

std::vector<int> twoSum(std::vector<int>& nums, int target) {
    std::vector<int> index;
    for(int i=0; i<nums.size()-1; i++){
        for(int j =1; j<nums.size(); j++){
            if(nums[i]+nums[j]==target && i !=j ){
                index.push_back(i);
                index.push_back(j);
                return index;
            }
        }
    }
    return index;
}

int main(){
    std::vector<int> myVector = {1,2,3,4,5,6,7,8};
    std::vector<int> index = twoSum(myVector,10);
    std::cout << "[";
    for (size_t i = 0; i < index.size(); i++) {
        std::cout << index[i];
        if (i != index.size() - 1) {
            std::cout << ",";
        }
    }
    std::cout << "]" << std::endl;
}
