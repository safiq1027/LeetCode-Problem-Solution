#include<bits/stdc++.h>
using namespace std;

int maxProfit(vector<int>& prices) {
    int n=prices.size();
    int maxProfit=0;
    int mini=prices[0];
    for(int i=1;i<n;i++){
        int curProfit=prices[i]-mini;
        maxProfit=max(maxProfit,curProfit);
        mini=min(mini,prices[i]);
    }
    return maxProfit;

}

int main()
{
    vector<int> prices ={7,1,5,3,6,4};
    int ans=maxProfit(prices);
    cout<<ans<<endl;
    return 0;
}

/*
Approach:
The algorithm approach can be stated as:

1.Initialize a variable ‘maxProfit’ to 0 and declare another variable ‘mini’ which
we will use to keep track of the buying price
(minimum price from day 0 to day i) for selling the stock.

2.Traverse the array from index 1 to n-1. We started at index 1
because buying and selling the stock on the 0th day will give us
a profit of 0, which we have initialized our maxProfit as already.

3.In each iteration, try to find the curProfit. The selling price
will be Arr[i] and ‘mini’ will give us the buying price.
We calculate the curProfit. If it is more than the existing profit value
(maxProfit), we update the maxProfit value.

4.Before going to the next iteration, we check if the current price
(Arr[i]) is less than the mini value, and we assign it as the
new mini value. In this way, we keep track of the buying price
in a single iteration itself.

*/
