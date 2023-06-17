
class Solution {
public:
   int bloom[100010],n;
   int max_bouquets(int d,int k){
       int curr_hav=0,bouqets=0;
       for(int i=0;i<n;i++){
           if(bloom[i]<=d){
               curr_hav++;
               if(curr_hav==k){
                   bouqets++;
                   curr_hav=0;
               }
           }
           else
           {
               curr_hav=0;
           }
       }

       return bouqets;

   }


    int minDays(vector<int>& bloomDay, int m, int k) {
       //start vector to convert array
        n=bloomDay.size();
        for(int i=0;i<n;i++){
            bloom[i]=bloomDay[i];
        }
        //end convert
        int low=1,high=1000000000;
        int ans=1000000000;
        int found_ans=0;
        while(low<=high){
            int mid=(low+high)/2;
            if(max_bouquets(mid,k)<m){
                low=mid+1;
            }
            else
            {
                found_ans=1;
                ans=min(ans,mid);
                high=mid-1;
            }
        }
        if(found_ans==0){
            return -1;
        }
        else
        {
            return ans;
        }

    }
};
