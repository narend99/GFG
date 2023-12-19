//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
 

// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    //Function to find the first position with different bits.
    int posOfRightMostDiffBit(int m, int n)
    {
        int cnt = 0;
        int temp = 1;
        int maxi = max(m,n);
        
        while(temp <= maxi)
        {
            int val1 = temp & m;
            int val2 = temp & n;
            
            if(val1 == val2)
            {
                cnt++;
                temp = temp<<1;
            }
            else
            {
                cnt++;
                return cnt;
            }
        }
        
        return -1;
    }
};

//{ Driver Code Starts.

// Driver Code
int main()
{   
    int t;
    cin>>t; //input number of testcases
    while(t--)
    {
         int m,n;
         cin>>m>>n; //input m and n
         Solution ob;
         cout << ob.posOfRightMostDiffBit(m, n)<<endl;
    }
    return 0;     
} 
// } Driver Code Ends