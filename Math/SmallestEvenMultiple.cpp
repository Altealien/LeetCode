//NO.2413

#include <iostream>

int smallestEvenMultiple(int n) {
    if(n%2==0){
         return n;
    }
    else{
        return n*2;
    }
}

int main(){
    std::cout << "Enter Number:";
    int number;
    std::cin >> number;
    std::cout << "The smallest even multiple of "<<number<<" is " << smallestEvenMultiple(number) << std::endl;
}