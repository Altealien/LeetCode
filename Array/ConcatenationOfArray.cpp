//No.1929

#include <iostream>
#include <vector>

std::vector<int> getConcatenation(std::vector<int>& nums) {
    int size = nums.size();
    int newSize = (size*2);
    std::vector<int> answer(newSize);
        for(int i =0; i<size;i++){
            answer[i]= nums[i];
            answer[i+size] = nums[i];
        }
    return answer;
}

int main(){
    std::vector<int> nums = {1,2,1};
    std::vector<int> nums_concatenated = getConcatenation(nums);
    std::cout << "[";
    for (size_t i = 0; i < nums_concatenated.size(); i++) {
        std::cout << nums_concatenated[i];
        if (i != nums_concatenated.size() - 1) {
            std::cout << ",";
        }
    }
    std::cout << "]" << std::endl;
}