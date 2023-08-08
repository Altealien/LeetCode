//No.1662
/*Given two string arrays word1 and word2, return true if the two arrays represent the same string, 
and false otherwise.
A string is represented by an array if the array elements concatenated in order forms the string.*/

#include <iostream>
#include <string>
#include <vector>

bool arrayStringsAreEqual(std::vector<std::string>& word1, std::vector<std::string>& word2) {
    std::string wordOne = "", wordTwo= "";
    for(int i = 0; i<word1.size() ;i++){
        wordOne += word1[i]; 
    }
    for(int i = 0; i<word2.size() ;i++){
        wordTwo += word2[i]; 
    }
    if(wordOne == wordTwo){
        return true;
    }
    else{
        return false;
    }
}