//{ Driver Code Starts
// Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
// User function template for C++

class Solution {
  public:
  bool isvowel(char A){
      if(A=='a' || A=='e' || A=='i'|| A=='o'|| A=='u'|| A=='?')
      return 1;
      return 0;
  }
  
    int isGoodorBad(string S) {
        // code here
         int maxiv=0,maxic=0;
          
          
        
        for(int i=0;i<S.length();i++){
           if(isvowel(S[i]))
           {
               maxiv+=1;
           }else
           {
               maxiv=0;
           }
           if(maxiv>5) return 0;
           if(!isvowel(S[i]) || S[i]=='?'){
               maxic+=1;
           }
           else{
               maxic=0;
           }
           if(maxic>3) return 0;
        }
        
        
        
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