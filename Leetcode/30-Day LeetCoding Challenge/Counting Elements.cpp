class Solution {
public:
    int countElements(vector<int>& arr) {
        unordered_map <int,int> m;
        sort(arr.begin(),arr.end());
        pair<int,int> last = {0,0};
        int ans=0;
        for(auto x:arr){
            if (x!=last.first){
                if (x==last.first+1)
                    ans+=last.second;
                last={x,1};
            }
            else
                last.second++;
        }
        return ans;
    }
};