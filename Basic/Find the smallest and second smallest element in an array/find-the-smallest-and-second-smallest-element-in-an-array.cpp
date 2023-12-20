//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

vector<int> minAnd2ndMin(int a[], int n);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];

        for (int i = 0; i < n; i++) 
            cin >> a[i];

        vector<int> ans = minAnd2ndMin(a, n);
        if (ans[0] == -1)
            cout << -1 << endl;
        else 
            cout << ans[0] << " " << ans[1] << endl;
    }
    return 0;
}
// } Driver Code Ends


vector<int> minAnd2ndMin(int prices[], int n) 
{
     int smallest = prices[0];
     int ss = INT_MAX;
     
     for(int i=1;i<n;i++)
       {
         if(prices[i] < smallest)
         {
             ss = smallest;
             smallest = prices[i];
         }
         else if(prices[i] > smallest && ss > prices[i])
         {
             ss = prices[i];
         }
       }
       
         if(ss == INT_MAX) return {-1,-1};
         
         vector<int> ans;
         ans.push_back(smallest);
         ans.push_back(ss);
         return ans;
    
}