// No.1672
/*You are given an m x n integer grid 
accounts where accounts[i][j] is the amount of money the i​​​​​​​​​​​th​​​​ customer has in the j​​​​​​​​​​​th​​​​ bank. 
Return the wealth that the richest customer has.
A customer's wealth is the amount of money they have in all their bank accounts.
The richest customer is the customer that has the maximum wealth.*/


#include <iostream>
#include <vector>

using namespace std;

int maximumWealth(vector<vector<int>>& accounts) {
    int maxWealth{0};
    for(int i =0; i< accounts.size();i++){
       int tempWealth{0};
        for(int j=0; j<accounts[i].size();j++){
            tempWealth += accounts[i][j];
        }
      maxWealth=std::max(maxWealth, tempWealth);
    }
    return maxWealth;
}