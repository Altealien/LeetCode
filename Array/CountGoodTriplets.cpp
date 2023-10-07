/*1534. Count Good Triplets
Given an array of integers arr, and three integers a, b and c. You need to find the number of good triplets.
A triplet (arr[i], arr[j], arr[k]) is good if the following conditions are true:
0 <= i < j < k < arr.length
|arr[i] - arr[j]| <= a
|arr[j] - arr[k]| <= b
|arr[i] - arr[k]| <= c
Where |x| denotes the absolute value of x.
Return the number of good triplets.
Example 1:
Input: arr = [3,0,1,1,9,7], a = 7, b = 2, c = 3
Output: 4
Explanation: There are 4 good triplets: [(3,0,1), (3,0,1), (3,1,1), (0,1,1)].*/

#include <iostream>
#include <vector>

int countGoodTriplets(std::vector<int>& arr, int a, int b, int c);

int main(){
    std::vector<int> arr = {3,0,1,1,9,7};
    int a = 7, b = 2, c = 3;
    std::cout << countGoodTriplets(arr, a, b, c) << std::endl;
}

int countGoodTriplets(std::vector<int>& arr, int a, int b, int c) {
    int count{0};
    int size = arr.size();
    for(int i = 0 ; i< size; i++){
        for(int j = i+1 ; j < size; j++){
            for(int k = j+1; k < size; k++){
                if((std::abs(arr[i]-arr[j]) <= a) && (std::abs(arr[j]-arr[k]) <= b) && (std::abs(arr[i]-arr[k]) <= c)){
                    count++;
                }
            }
        }
    }
    return count;
}