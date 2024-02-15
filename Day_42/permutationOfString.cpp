#include<iostream>
#include<vector>
using namespace std;

void printPermutation(string &str, int index) { 
// void printPermutation(string str, int index) {
    //base case
    if(index >= str.length()) {
        cout << str << " ";
        return;
    }

    for(int j=index; j<str.length(); j++) {
        swap(str[index], str[j]);
        //recursion bhaiya baki kam sambhalenge
        printPermutation(str, index+1);
        //backtracking
        swap(str[index], str[j]); //used if by reference str is given to the function
    }
}

int main() {
    
    string str = "abc";
    int index = 0;
    printPermutation(str, index);

    return 0;
}