#include<iostream>
#include<vector>
using namespace std;

void solve(int arr[], int size, int index, vector<int> &ans) { //by reference pass
    //base case
    if(index >= size) {
        return;
    }
    //processing
    if(arr[index] % 2 == 0 ) {
        //even
        ans.push_back(arr[index]);
    }
    //Recursive call
        solve(arr, size, index+1, ans);
}


int main() {
    int arr[] = {11,20,31,40,51};
    int size = 5;
    int index = 0;

    vector<int> ans;
    solve(arr, size, index, ans);

    //priting vector
    for(int num: ans) {
        cout << num << " ";
    }

    return 0;
}