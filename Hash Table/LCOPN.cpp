/*17. Letter Combinations of a Phone Number
Medium
Given a string containing digits from 2-9 inclusive,
return all possible letter combinations that the number could represent. Return the answer in any order.
A mapping of digits to letters (just like on the telephone buttons) is given below.
Note that 1 does not map to any letters.*/

#include <iostream>
#include <vector>
#include <string>

std::vector<std::string> letterCombinations(std::string digits)
{
    std::vector<std::string> telephoneButtons = {
        {"abc"},
        {"def"},
        {"ghi"},
        {"jkl"},
        {"mno"},
        {"pqrs"},
        {"tuv"},
        {"wxyz"},
    };

    std::vector<std::string> frontier{""};
    std::vector<std::string> next{};
    int index = 0;
    std::string temp;

    if (digits.empty())
        return {};

    for (const char &digit : digits)
    {
        next.clear();
        int index = (digit - '2');
        for(const std::string &b : frontier){
            for(const char& c : telephoneButtons[index]){
                temp = b + c;
                next.push_back(temp);
            }
        }
        frontier = next;
    }

    return frontier;
}

int main()
{
    std::vector<std::string> myVec = letterCombinations("");
    for (auto string : myVec)
    {
        std::cout << string << ",";
    }
}