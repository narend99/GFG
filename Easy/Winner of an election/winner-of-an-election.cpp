//{ Driver Code Starts
#include <iostream>
#include <map>
#include <algorithm>
#include <cstdlib>
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution{
  public:
  
    //Function to return the name of candidate that received maximum votes.
    vector<string> winner(string arr[],int n)
    {
        unordered_map<string,int> m;
        int maxi = INT_MIN;
        vector<string> ans;
        vector<string> result; 
        
        for(int i=0;i<n;i++)
          m[arr[i]]++;
          
          
        for(auto it : m)
        {
           maxi = max(maxi,it.second);
        }
        
        for(auto it: m)
        {
            if(it.second == maxi)
            {
                ans.push_back(it.first);
            }
        }
        
        string ch = to_string(maxi);
        
        
        sort(ans.begin(),ans.end());
        result.push_back(ans[0]);
        result.push_back(ch);
        
        return result;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    
    for(int i=0;i<t;i++)
    {
        
        
        int n;
        cin>>n;
        
        string arr[n];
        
        for (int i=0;i<n;i++)
        cin>>arr[i];
        Solution obj;
        vector<string> result = obj.winner(arr,n);
        
        cout<<result[0] << " " << result[1] << endl;
    }
    return 0;
}

// } Driver Code Ends