//{ Driver Code Starts
/* Driver program to test above function */

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
    int buyMaximumProducts(int n, int k, int price[]){
        
        vector<pair<int,int>> store(n);
        
        for(int i=0;i<n;i++)   //can't make this i=1 cause of price[0]
        {
            store[i].first = price[i];
            store[i].second = i+1;
        }
        
        sort(store.begin(),store.end());
        
        int cnt = 0;
        
        for(int i=0;i<n;i++)
        {
            int max_qty = k/store[i].first;             //max_qty we can buy with k
            int f_qty = min(max_qty,store[i].second);  //atmost we can buy store[i].second
           
           //if max_qty is less than store[i].second that means we don't have sufficient amt to buy the max no. of stocks tha can be bought on that day          
           // k will never become -ve as final qty will be 0 when k is less than store[i].first
           // k -= store[i].first * f_qty but f_qty = 0 coz k < store[i].first
           // so k remains unchanged
           
            cnt += f_qty;         
            k -= store[i].first * f_qty;
        }
        
        return cnt;
    }
        //TC - O(N) + O(N) + O(N log(N))
        //SC - O(N)
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