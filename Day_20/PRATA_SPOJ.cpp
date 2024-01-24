#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool isPossibleSolution(vector<int>cooksRanks, int nP, int mid) {
    int currP = 0; // initial cooked Prata Count
    for(int i=0; i<cooksRanks.size(); i++) {
        int R = cooksRanks[i], j = 1;
        int timeTaken = 0;

        while(true) {
            if(timeTaken + j * R <= mid) {
                ++currP;
                timeTaken += j*R;
                ++j;
            }
            else {
                break;
            }
        }
        if(currP >= nP) {
            return true;
        }
    }
    return false;
}

int minTimeToCompleteOrder(vector<int>cooksRanks, int nP) {
    int start = 0;
    int highestRank = *max_element(cooksRanks.begin(), cooksRanks.end());
    int end = highestRank * (nP * (nP + 1) / 2);
    int ans = -1;

    while(start <= end) {
        int mid = (start + end) >> 1;
        if(isPossibleSolution(cooksRanks, nP, mid)) {
            ans = mid;
            end = mid - 1;
        }
        else {
            start = mid + 1;
        }
    }
    return ans;
}

int main() {
    int T; 
    cin >> T;
    while(T--) {
        int nP, nC;
        cin >> nP >> nC;
        vector<int>cooksRanks;

        while(nC--) {
            int R;
            cin >> R;
            cooksRanks.push_back(R);
        }

        cout << minTimeToCompleteOrder(cooksRanks, nP) << endl;
    }

    return 0;
}

//input: 3
//       10
//       4 1 2 3 4
//       8
//       1 1
//       8
//       8 1 1 1 1 1 1 1 1 
//output: 12
//        36
//        1