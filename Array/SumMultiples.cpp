//No.2652

#include <iostream>

int sumOfMultiples(int n) {
    int sum{0};
    for(int i =1; i<=n;i++){
        if(i%3==0 || i%5==0 || i%7==0){
            sum += i;
        }
    }
    return sum;
}

int main(){
    int num;
    std::cout << "Enter number:";
    std::cin >> num;
    std::cout << "Sum of Multiples is " << sumOfMultiples(7) << std::endl;
}