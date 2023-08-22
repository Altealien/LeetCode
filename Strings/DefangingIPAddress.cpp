/*1108. Defanging an IP Address
Given a valid (IPv4) IP address, return a defanged version of that IP address.
A defanged IP address replaces every period "." with "[.]".*/

#include <iostream>
#include <string>

std::string defangIPaddr(std::string address){
    std::string result ="";
    for(int i =0; i < address.length(); i++){
        if(address[i] == '.'){
            result += "[.]";
        }
        else{
            result += address[i];
        }
    }
    return result;
}

int main(){
    std::string defangedAddress = defangIPaddr("127.0.0.1");
    std::cout << defangedAddress << std::endl;
}