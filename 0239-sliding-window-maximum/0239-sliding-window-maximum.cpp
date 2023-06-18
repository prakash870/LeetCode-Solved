class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& a, int k) {
        int n=a.size();
        deque<int>dq;
        vector<int>ans;
        for(int i=0;i<k;i++){
            while(!dq.empty() && a[dq.back()]<a[i])
             dq.pop_back();
             dq.push_back(i);
        }
        ans.push_back(a[dq.front()]);
        for(int i=k;i<n;i++){
            int start=i-k;
            if(dq.front()==start) dq.pop_front();

              while(!dq.empty() && a[dq.back()]<a[i])
             dq.pop_back();

            dq.push_back(i);
           ans.push_back(a[dq.front()]);
        }



      return ans;
    }
};