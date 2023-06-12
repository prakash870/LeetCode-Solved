//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    vector<pair<int,int>> allPairs(int A[], int B[], int N, int M, int x)
    {
        vector<pair<int,int>> v;
        unordered_map<int,int>m;
        sort(A,A+N);
        
        for(int i=0;i<M;i++)
        {
            m[B[i]]=i;
        }
         
         for(int i=0;i<N;i++)
         {
             int rem= x-A[i];
             if(m.find(rem)!=m.end())
             {
                //  pair<int,int>a;
                //  a.first=A[i];
                //  a.second=rem;
                //  v.push_back(make_pair(A[i],rem));
                 v.push_back({A[i],rem});
             }
         }
         return v;
    }
};


//{ Driver Code Starts.
int main() {
	long long t;
	cin >> t;
	
	while(t--){
	    int N, M, X;
	    cin >> N >> M >> X;
        int A[N], B[M];
        
	    for(int i = 0;i<N;i++)
	        cin >> A[i];
	    for(int i = 0;i<M;i++)
	        cin >> B[i];
	        
	   Solution ob;
	   vector<pair<int,int>> vp = ob.allPairs(A, B, N, M, X);
	   int sz = vp.size();
        if(sz==0)
        cout<<-1<<endl;
        else{
            for(int i=0;i<sz;i++){
                if(i==0)
                cout<<vp[i].first<<" "<<vp[i].second;
                else
                cout<<", "<<vp[i].first<<" "<<vp[i].second;
            }
            cout<<endl;
        }
	}
	return 0;
}
// } Driver Code Ends