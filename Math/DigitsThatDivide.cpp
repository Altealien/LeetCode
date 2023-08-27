/*2520. Count the Digits That Divide a Number
Given an integer num, return the number of digits in num that divide num.
An integer val divides nums if nums % val == 0.
*/

#include <iostream>

int countDigits(int num) {
    int count{0}, digit;
    int originalNumber{num};
        
    while(num > 0){
        digit = num%10;
        if(originalNumber% digit == 0){
            count++;
        }
        num /= 10;
    }

    return count;
}