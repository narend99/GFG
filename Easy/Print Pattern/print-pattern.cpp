//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:

    vector<int> ans;
    int num1 =0;
    int num2 =0;
    
    int printing(int num1)
    {
        if(num1 <= 0)
        {
            ans.push_back(num1);
            return num1;
        }
        
        ans.push_back(num1);
        
        printing(num1-5);
    }
    
      void printingrev(int num2,int hold)
    {
        if(num2 == hold)
        {
            ans.push_back(num2);
            return;
        }
    
        ans.push_back(num2);
        printingrev(num2 + 5,hold);
    }  
    
    vector<int> pattern(int N)
    {
      int hold = N;
      
      if(N <= 0) 
      {
          ans.push_back(N);
          return ans;
      }
      int res = printing(N);
      printingrev(res+5,hold);
      
      return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        vector<int> ans = ob.pattern(N);
        for(int u: ans)
            cout<<u<<" ";
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends