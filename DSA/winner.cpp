class Solution {
public:
    void solve(vector<int>& v,int k,int index,int& ans){
        if(v.size()==1){
             ans=v[0];
            return;
    
        }
        index=(index+k)%v.size();
        v.erase(v.begin()+index);
        solve(v,k,index,ans);
    }
    int findTheWinner(int n, int k) {
            k=k-1;
            vector<int> v;
        for(int i=1; i<=n; i++)
            v.push_back(i);
        int ans=0;
        
    
        solve(v,k,0,ans);
        return ans;
    
    }
};