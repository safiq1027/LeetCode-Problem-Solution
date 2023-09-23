///136,137 same.260 hardly differnt
/// ekhne jeheto 2 ta value print kora lagbe ei jonno ans name ekta vector niya oikhne value dile hbe.

class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {

        map<int,int>mp;
    for(auto x:nums){
        mp[x]++;
    }
    vector<int> ans;
    for(auto z:mp){
        if(z.second==1){
           ans.push_back(z.first);
        }
    }

    return ans;
    }
};
