/*2114. Maximum Number of Words Found in Sentences
A sentence is a list of words that are separated by a single space with no leading or trailing spaces.
You are given an array of strings sentences, where each sentences[i] represents a single sentence.
Return the maximum number of words that appear in a single sentence.*/

#include <iostream>
#include <string>
#include <vector>
#include <sstream>

int mostWordsFound(std::vector<std::string>& sentences){
    int max{0};
    for(int i = 0; i< sentences.size(); i++){
        int count =0;
        std::stringstream ss(sentences[i]);
        std::string indvString;
        char space = ' ';

        while (getline(ss,indvString, space)){
            count++;
        }
        max = std::max(max,count);
    }
    return max;
}
