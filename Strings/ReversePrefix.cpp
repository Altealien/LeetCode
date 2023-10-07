/*2000. Reverse Prefix of Word
Given a 0-indexed string word and a character ch, reverse the segment of word that starts at index 0 
and ends at the index of the first occurrence of ch (inclusive). If the character ch does not exist in word, 
do nothing.
For example, if word = "abcdefd" and ch = "d", then you should reverse the segment that starts at 0 and ends 
at 3 (inclusive). The resulting string will be "dcbaefd".
Return the resulting string.
Example 1:
Input: word = "abcdefd", ch = "d"
Output: "dcbaefd"
Explanation: The first occurrence of "d" is at index 3. 
Reverse the part of word from 0 to 3 (inclusive), the resulting string is "dcbaefd".*/

#include <iostream>
#include <string>
#include <algorithm>

std::string reversePrefix(std::string word, char ch);
int main(){
    std::cout << reversePrefix("abcdefd", 'd') << std::endl;
}

std::string reversePrefix(std::string word, char ch) {
   
    for(int i = 0; i< word.length(); i++) {
        if (word[i] == ch){
            reverse(word.begin(), word.begin() +i+1);
            break;
        }
    }
    return word;
}