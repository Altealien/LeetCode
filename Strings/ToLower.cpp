/*709. To Lower Case
Given a string s, return the string after replacing every uppercase letter with the same lowercase letter. */

#include <iostream>
#include <string>

std::string toLower(std::string str);
int main(){
    std::string word;
    while(word != "END"){
        std::cout << ("Enter a word you wish to convert to lowercase: ");
        std::cin >> word;
        std::cout << toLower(word) << std::endl;
    }
}

std::string toLower(std::string str){
    std::string lower ="";
    for(char letter : str){
        if (letter >= 65 && letter <= 90){
            lower += (letter + 32);
        }
        else{
            lower += letter;
        }
    }
    return lower;
}