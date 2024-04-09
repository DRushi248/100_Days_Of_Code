class Solution {
public:
    int peopleAwareOfSecret(int n, int delay, int forget) {
        int cur = 0; //active spreader
        int ans = 1; // persons who know about secret.
        queue<pair<int, int>>delayQ, forgetQ; // <uss din, kitne new logo ko secret pata laga>
        delayQ.push({1,1});
        forgetQ.push({1,1});
        for(int i=1; i<=n; i++) {
            //step 1:active spreader and personn know about secret kam kro
            if(!forgetQ.empty() && forgetQ.front().first + forget <= i) {
                auto front = forgetQ.front();
                forgetQ.pop();
                auto no = front.second;
                ans = ans - no;
                cur = cur - no;
            }

            //step 2: make new active spreaders
            if(!delayQ.empty() && delayQ.front().first + delay <= i) {
                auto front = delayQ.front();
                delayQ.pop();
                cur = cur + front.second; //active kar diya
            }

            //step 3: spread the secret
            if(cur > 0) {
                ans = ans + cur;
                delayQ.push({i, cur});
                forgetQ.push({i, cur});
            }
        }
        return ans;
    }
};