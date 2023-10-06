/*2810. Faulty Keyboard
Your laptop keyboard is faulty, and whenever you type a character 'i' on it, 
it reverses the string that you have written. Typing other characters works as expected.
You are given a 0-indexed string s, and you type each character of s using your faulty keyboard.
Return the final string that will be present on your laptop screen.

Example 1:
Input: s = "string"
Output: "rtsng"
 */

#include <iostream>
#include <string>
#include <algorithm>

std::string finalString(std::string s);

int main(){
    std::cout << finalString("string") << std::endl;
    std::cout << finalString("poiinter") << std::endl;
}

std::string finalString(std::string s) {
    std::string result ="";
    for(auto letter: s){
        if(letter != 'i'){
            result += letter;
        }
        else{
            reverse(result.begin(), result.end());
        }
    }
    return result;
}