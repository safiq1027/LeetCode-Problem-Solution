/// using  map
///Map the given array's elements to their frequency. ( KEY : ELEMENT , VALUE : FREQUENCY )
///Traverse that map and return the key whose value =1.

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans;
        map<int,int> mp;
        for(auto x:nums){
            mp[x]++;
        }
        for(auto z:mp){
            if(z.second==1){
                ans= z.first;
            }
        }
        return ans;

    }
};

/// XOR opration
/*We apply the extended version of this gate in our bitwise XOR operator.
If we do "a^b" , it means that we are applying the XOR gate on the 2 numbers in a bitwise fashion ( on each of the corresponding bits of the numbers).
Similarly , if we observe ,

1.A^A=0
2.A^B^A=B
3.(A^A^B) = (B^A^A) = (A^B^A) = B This shows that position doesn't matter.
Similarly , if we see , a^a^a......... (even times)=0 and a^a^a........(odd times)=a
Google It for more details.

We apply the above observations :

1.Traverse the array and take the Bitwise XOR of each element.
2.Return the value.
Why does this work ??
Because , the elements with frequency=2 will result in 0. And then the only element with frequency=1 will generate the answer.
*/

class Solution {
public:
    int singleNumber(vector<int>& nums) {
       int ans=0;
	   for(auto x:nums)
	   ans^=x;
	   return ans;
    }
};
