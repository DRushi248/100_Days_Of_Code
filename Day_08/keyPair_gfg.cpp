
class Solution{
public:	

/*Method 1:
	bool twoSum(int arr[], int n, int x) {
	    for(int i=0; i<n; i++) {
	        for(int j=i+1; j<n; j++) {
	            if((arr[i] + arr[j]) == x) {
	                return true;
	            }
	        }
	    }
	    return false;
	}
*/
	
//Method 2:
	//O(n)
	bool twoSum2PointerApproach(int arr[], int n, int x) {
	    int l=0;
	    int h=n-1;
	    
	    while(l < h) {
	        int csum = arr[l] + arr[h];
	        if(csum == x) return true;
	        else if(csum > x) h--;
	        else l++;
	    }
	    return false;
	}
	
	
	bool hasArrayTwoCandidates(int arr[], int n, int x) {
	    // code here
        /*Method 1:
	    bool ans = twoSum(arr, n, x); //O(n^2) that's why don't work gives TLE
        */
	    
        //Method 2:
	    sort(arr, arr+n); //O(nlogn)
	    return twoSum2PointerApproach(arr, n, x); //O(nlogn)
	}
};
