//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution 
{
    public:
    //Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& M, int n) 
    {
        stack<int>st;
        
        //step 1: push all persons into stack
        for(int i=0; i<n; i++) {
            st.push(i);
        }
        
        //step 2: run discard method, to get a mightBeCelebrity
        while(st.size() != 1) {
            int a = st.top(); st.pop();
            int b = st.top(); st.pop();
            
            //if a knows b?
            if(M[a][b]) {
                //a is not celebrity, b might be
                st.push(b);
            }
            else {
                //b is not celebrity, a might be
                st.push(a);
            }
        }
        
        //step 3: Check that single person is actually celebrity?
        int mighBeCelebrity = st.top(); st.pop();
        
        //Cel. should not know anyone.
        for(int i=0; i<n; i++) {
            if(M[mighBeCelebrity][i] != 0) {
                return -1;
            }
        }
        
        //everyone should know Cel.
        for(int i=0; i<n; i++) {
            if(M[i][mighBeCelebrity] == 0 && i != mighBeCelebrity) {
                return -1;
            }
        }
        
        //mighBeCelebrity is the Cel.
        return mighBeCelebrity;
    }   
    
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<vector<int> > M( n , vector<int> (n, 0));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>M[i][j];
            }
        }
        Solution ob;
        cout<<ob.celebrity(M,n)<<endl;

    }
}

// } Driver Code Ends