//{ Driver Code Starts
/* Driver program to test above function */

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
    int buyMaximumProducts(int n, int k, int price[]){
        
        vector<pair<int,int>> store(n);
        
        for(int i=0;i<n;i++)
        {
            store[i].first = price[i];
            store[i].second = i+1;
        }
        
        sort(store.begin(),store.end());
        
        int cnt = 0;
        
        for(int i=0;i<n;i++)
        {
            int max_qty = k/store[i].first;
            int f_qty = min(max_qty,store[i].second);
            cnt += f_qty;
            k -= store[i].first * f_qty;
        }
        
        return cnt;
    }
};


//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n, k;
	    cin >> n >> k;
	    int price[n];
	    for(int i = 0 ; i < n; i++){
	        cin >> price[i];
	    }
	    Solution ob;
	    int ans = ob.buyMaximumProducts(n, k, price);
	    cout << ans<<endl;
	}
	return 0;
}

// } Driver Code Ends