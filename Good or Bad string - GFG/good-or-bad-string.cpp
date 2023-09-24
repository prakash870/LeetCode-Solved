//{ Driver Code Starts
// Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
// User function template for C++

class Solution {
    public:
    bool isvowel(char pr)
            {
                if(pr=='a' || pr=='e' ||  pr=='i' ||  pr=='o' ||  pr=='u')
                return 1;
                else
                return 0;
            }
    
    int isGoodorBad(string S) 
    {
        // code here
        int n=S.size();
        int vowelcount=0;
        int consocount=0;
        int max1=-1;
        int max2=-1;
        for(int i=0;i<n;i++)
        {
            if(isvowel(S[i]) || S[i]=='?')
            {
                vowelcount++;
                if(vowelcount>max1)
                max1=vowelcount;
            }
                else
                vowelcount=0;
                
            
        }
           for(int i=0;i<n;i++) 
           {
            if(!isvowel(S[i]) )
            {
                consocount++;
                if(consocount>max2)
                max2=consocount;
            }
                else
                consocount=0;
               
            
        }
        if(max1>5 || max2>3)
        return 0;
        else
        return 1;
   }
};







//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string S;
        
        cin >> S;
        
        Solution ob;
        cout << ob.isGoodorBad(S) << endl;
    }
    return 0; 
}
// } Driver Code Ends