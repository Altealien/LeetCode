//No.2798

#include <iostream>
#include <vector>

int numberOfEmployeesWhoMetTarget(std::vector<int>& hours, int target) {
    int count{0};
    for(int hour : hours){
        if(hour>=target){
            count++;
        }
    }
        return count;
}

int main(){
    std::vector<int> hours ={0,1,2,3,4,5};
    std::cout << numberOfEmployeesWhoMetTarget(hours,2) << std::endl;
}