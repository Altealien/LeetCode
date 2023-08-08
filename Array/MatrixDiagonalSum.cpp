//NO.1572
#include <iostream>
#include <vector>
    
int diagonalSum(std::vector<std::vector<int>>& mat) {
    int sumOfMainDiag{0} ,sumOfSecondDiag{0};
    for(int i =0; i<mat.size(); i++){
        for(int j = 0; j<mat[i].size(); j++){
            if(i == j){
                sumOfMainDiag += mat[i][j];
            }
        }
    }
    for(int i =0; i<mat.size(); i++){
        for(int j = 0; j<mat[i].size(); j++){
            if(i + j == mat.size()-1 && i != j){
                sumOfSecondDiag += mat[i][j];
            }
        }
    }
    return sumOfMainDiag + sumOfSecondDiag;
}