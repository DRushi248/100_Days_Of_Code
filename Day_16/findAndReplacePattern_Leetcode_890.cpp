class Solution {
public:
//this function normalises all the words and pattern into a similar format
//so that we can compare them and find the solution
    void createMapping(string& str) {
        //find mapping
        char start = 'a';
        char mapping[300] = {0};

        for(auto ch: str) {
            if(mapping[ch] == 0) {
                mapping[ch] = start;
                start++;
            }
        }

        //update the string
        for(int i=0; i<str.length(); i++) {
            char ch = str[i];
            str[i] = mapping[ch];
        }
    }

    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        vector<string> ans;
        
        //firstly normalise the pattern
        createMapping(pattern);

        //saare words k sath khelna h
        for(string s: words) {
            string tempString = s;

            //normalise tempString
            createMapping(tempString);

            if(tempString == pattern) {
                //it means, that "s" wali string was a valid answer
                ans.push_back(s);
            }
        }
        return ans;
    }
};