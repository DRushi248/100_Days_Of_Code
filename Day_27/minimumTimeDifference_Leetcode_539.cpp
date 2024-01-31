class Solution {
public:
    
    /*Method 1:
    int expand(string s, int i, int j) {
        int count = 0;

        while(i >= 0 && j < s.length() && s[i] == s[j]) {
            count++;
            i--;
            j++;
        }
        return count;
    }
    */

    int convertToMin(string&time) {
        int hr = stoi(time.substr(0, 2));
        int min = stoi(time.substr(3, 2));
        return 60*hr + min;
    }

    int findMinDifference(vector<string>& timePoints) {
        /*Method 1:
        // int totalCount = 0;

        // for(int center = 0; center < s.length(); center++) {
        //     //ODD
        //     int oddKaAns = expand(s, center, center);

        //     //EVEN 
        //     int evenKaAns = expand(s, center, center+1);

        //     totalCount = totalCount + oddKaAns + evenKaAns;
        // }
        // return totalCount;
        */


        vector<int>mins;
        for(auto time: timePoints)
            mins.push_back(convertToMin(time));
        sort(mins.begin(), mins.end());
        int ans = INT_MAX; //min diff
        
        for(int i=0; i<mins.size()-1; i++) 
            ans = min(ans, mins[i + 1] - mins[i]);

        //last diff
        int lastdiff = mins[0] + 1440 - mins[mins.size()-1];
        ans = min(ans, lastdiff);
        return ans;
    }
};