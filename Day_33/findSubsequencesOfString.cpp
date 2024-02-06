#include<iostream>
#include<vector>
using namespace std;

void findSubsequences(string str, string output, int index, vector<string>& ans) {
    //base case
    if(index >= str.length()) {
        //ans jo h, vo output string me build ho chuka h
        //print krdo 
        //cout << "->" << output << endl;
        ans.push_back(output);
        return;
    }

    char ch = str[index];

    //include
    output.push_back(ch);
    findSubsequences(str, output, index+1, ans);

    //exclude
    output.pop_back();
    findSubsequences(str, output, index+1, ans);
    

    // 1st exclude then include:
    // //exclude
    // findSubsequences(str, output, index+1);

    // //include
    // //output string me ch character ko include krdo
    // output.push_back(ch);
    // findSubsequences(str, output, index+1);

}


int main() {
    string str = "abc";
    string output = " ";
    int index = 0;
    vector<string> ans;
    findSubsequences(str, output, index, ans);

    cout << "printing the subsequences in vector: " << endl;
    for(string s: ans) {
        cout << "->" << s << endl;
    }


    return 0;
}