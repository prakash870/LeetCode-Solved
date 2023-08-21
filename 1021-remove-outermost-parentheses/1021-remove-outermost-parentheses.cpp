class Solution {
public:
    string removeOuterParentheses(string s) {
        int count=0;
        string ans="";
        int flag=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='(') count++;
            if(s[i]==')') count--;
            if(flag==0 && count==1){
                flag=1;
                continue;
            }
              if(flag==1 && count==0){
                flag=0;
                continue;
            }
            ans+=s[i];


        }
        return ans;
    }
};