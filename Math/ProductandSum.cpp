//No.1281
#include <iostream>
#include <string>

/*Given an integer number n, 
return the difference between the 
product of its digits and the sum of its digits.*/

int subtractProductAndSum(int n) {
    int sum{0}, product{1};
    std::string numAsString = std::to_string(n);
    for(char digit : numAsString){
        sum = sum + (digit-'0');
        product = product *(digit-'0');
    }
     return product - sum;
}
