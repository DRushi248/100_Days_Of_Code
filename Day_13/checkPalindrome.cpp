#include<iostream>
#include<string.h>
using namespace std;

bool checkPalindrome(char ch[], int n) {
    //n -> lenght of string
    int i=0; 
    int j=n-1;

    while(i<=j) {
        if(ch[i] == ch[j]) {
            i++;
            j--;
        }
        else {
            //characters are not matching
            return false;
        }
    }
    return true;
}

int main() {
    char ch[100];

    //cin >> ch;
    cin.getline(ch, 100);

    bool isPalindrome = checkPalindrome(ch, strlen(ch));

    if(isPalindrome) {
        cout << "Valid Palindrome" << endl;
    }
    else {
        cout << "Invalid Palindrome" << endl;
    }
    
    return 0;
}