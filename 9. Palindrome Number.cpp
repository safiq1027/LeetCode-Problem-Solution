#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(int x)
{
    if(x<0){
        return false;
    }
    else
    {
        int y=x;
        long int rev=0;
        while(x>0){
            rev=rev*10+x%10;
            x/=10;
        }
        if(rev==y){
            return true;
        }
        else
        {
            return false;
        }
    }
}
int main()
{
  int n;
  cin>>n;
  bool ans=isPalindrome(n);
  cout<<ans<<endl;
  return 0;
}

