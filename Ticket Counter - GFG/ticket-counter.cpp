//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
   int distributeTicket(int N, int k) {
        // code hereint
        int x=1;
        int y=N;
        if(N==k)
        return N;
        while(x<y)
        {
            for(int i=0;i<k;i++)
            {
                x++;
                if(x>=y)
                return x;
            }
            for(int i=0;i<k;i++)
            {
                y--;
                if(x>=y)
                return y;
            }
        }
        return 0;
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int N;
        scanf("%d",&N);
        
        
        int K;
        scanf("%d",&K);
        
        Solution obj;
        int res = obj.distributeTicket(N, K);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends