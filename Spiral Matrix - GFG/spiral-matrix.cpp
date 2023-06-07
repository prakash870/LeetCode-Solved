//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{

	public:
	int findK(vector<vector<int>> &a, int n, int m, int k)
    {
        int row=a.size();
        int col=a[0].size();
        
        vector<int>ans;
    int startRow=0,startCol=0;
    int endRow=row-1,endCol=col-1;
    int total= row*col;
    int count=0;
    while(count<total){
        
    for(int i=startCol; count<=total && i<=endCol;i++)
    {
        ans.push_back(a[startRow][i]);
        count++;
    }
    startRow++;
     for(int i=startRow;i<=endRow  && count<total;i++)
    {
        ans.push_back(a[i][endCol]);
        count++;
    }
    endCol--;
    
    for(int i=endCol;i>=startCol && count<total;i--)
    {
        ans.push_back(a[endRow][i]);
        count++;
    }
    endRow--;
    
    for(int i=endRow;i>=startRow  && count<total ;i--)
    {
        ans.push_back(a[i][startCol]);
        count++;
    }
    startCol++;
    
    }
    return ans[k-1];
    }

};

//{ Driver Code Starts.

int main()
{
    int T;
    cin>>T;
  
    while(T--)
    {
        int n,m;
        int k=0;
        //cin>>k;
        cin>>n>>m>>k;
        vector<vector<int>> a(n, vector<int>(m, 0));
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>a[i][j];
            }
        }

        Solution obj;

        cout<< obj.findK(a, n, m, k) << "\n";
        
       
    }
}
// } Driver Code Ends