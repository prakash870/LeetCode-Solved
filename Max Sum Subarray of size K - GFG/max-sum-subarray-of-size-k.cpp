//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends

class Solution{   
public:
#include<bits/stdc++.h>
    long maximumSumSubarray(int k, vector<int> &a , int n){
        // code here 
       long long sum=0; 
       long long maxi=INT_MIN;
       for(int i=0;i<k;i++){
           sum+=a[i];
           maxi=sum;
       }
      
       for(int i=k;i<n;i++){
               int start=i-k;
               int rear=i;
               sum=sum+a[rear]-a[start];
               if(sum>maxi) maxi=sum;
       }
       
       
       
       
       
       
       
       
       
    return maxi ;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N,K;
        cin >> N >> K;;
        vector<int>Arr;
        for(int i=0;i<N;++i){
            int x;
            cin>>x;
            Arr.push_back(x);
        }
        Solution ob;
        cout << ob.maximumSumSubarray(K,Arr,N) << endl;
    }
    return 0; 
} 
// } Driver Code Ends