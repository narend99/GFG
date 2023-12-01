//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	string addBinary(string A, string B)
	{
	    int i = A.length() - 1;
	    int j = B.length() - 1;
	    
	    int sum = 0;
	    int c = 0;
	    int val1,val2;
	    string ans;
	    
	    while(i >= 0 || j >= 0)
	    {
	         if(i >= 0)
	         val1 = A[i] - '0';
	         else
	         val1 = 0;
	         
	         if(j >= 0)
	         val2 = B[j] - '0';
	         else
	         val2 = 0;
	         
	         sum = val1+val2+c;
	         
	         ans += to_string(sum%2);
	         
	         c = sum/2;
	         
	         i--;
	         j--;
	    }

	     if(c != 0)
	     ans += to_string(c);
         reverse(ans.begin(),ans.end());
         
         i = 0;
         
         while(ans[i] == '0' && i < ans.length())
         {
              i++;
         }
         
         ans = ans.substr(i,ans.length() - i);
	     return ans;
	}
};

//{ Driver Code Starts.

int main()
{
	int t; cin >> t;
	while (t--)
	{
		string A, B; cin >> A >> B;
		Solution ob;
		cout << ob.addBinary (A, B);
		cout << "\n";
	}
}

// Contributed By: Pranay Bansal

// } Driver Code Ends