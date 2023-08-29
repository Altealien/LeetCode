/*1816. Truncate Sentence
A sentence is a list of words that are separated by a single space with no leading or trailing spaces. 
Each of the words consists of only uppercase and lowercase English letters (no punctuation).
For example, "Hello World", "HELLO", and "hello world hello world" are all sentences.
You are given a sentence s​​​​​​ and an integer k​​​​​​. 
You want to truncate s​​​​​​ such that it contains only the first k​​​​​​ words. Return s​​​​​​ after truncating it.
*/

#include <iostream>
#include <string>

std::string truncateSentence(std::string s, int k){
    std::string truncated = "";
    int count = 0;

    for(auto x: s){
        if(x == ' '){
            count++;
        }
        if(count == k){
            break;
        }
        truncated += x;
    }
    return truncated;
}

int main(){
    std::string s = "Hello,how are you doing that";
    std::cout << truncateSentence(s,4) << std::endl;
}