 #include<bits/stdc++.h>
 using namespace std;
/// approach 3:set function use kore...duplicate value ghulo nibe na..
///jOdi kono duplicate value theke taile set er size first array er size theke kom hBe.
 bool containsDuplicate(vector<int>& nums) {
     int n=nums.size();
     set<int> Set;
     for(int i=0;i<n;i++){
        Set.insert(nums[i]);
     }
     int lenSet=Set.size();
     if(lenSet<n){
        return true;
     }
     else
     {
         return false;
     }


}

int main()
{
     vector<int> nums {1, 2, 3, 1};

    bool res = containsDuplicate(nums);

    // printing the result
    if(res== 1)
        cout<<"true"<<endl;
    else
        cout<<"false"<<endl;
}
/// approcah 2: sort =>We just only need to check for adjacent or neighboring elements
/// whether they are the same or not.
/*
bool containsDuplicate(vector<int> nums) {

    sort(nums.begin(),nums.end());

    for(int index = 1; index < nums.size(); index++) {
        if(nums[index ] == nums[index - 1]) {
            return true;
        }
    }

    return false;
}
*/

///approach 01:nested loop=>
/*
bool containsDuplicate(vector<int> nums) {

    for(int i = 0; i < nums.size(); i++) {
        for(int j = i + 1; j < nums.size(); j++) {
            if(nums[i] == nums[j]) {
                return true;
            }
        }
    }

    return false;
}

*/
