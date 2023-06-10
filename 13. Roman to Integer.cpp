#include<bits/stdc++.h>
using namespace std;

int romtoInt(string s)
{
    int pre=0,current,ans=0;
    int len=s.size();
    for(int i=len-1;i>=0;i--){
        switch(s.at(i)){
        case 'I':
            current=1;
            break;
         case 'V':
            current=5;
            break;
         case 'X':
            current=10;
            break;
         case 'L':
            current=50;
            break;
         case 'C':
            current=100;
            break;
         case 'D':
            current=500;
            break;
         case 'M':
            current=1000;
            break;
        }
        if(pre>current){
            ans-=current;
            pre=current;
        }
        else
        {
            ans+=current;
            pre=current;
        }
    }
    return ans;

}

int main()
{
  string s;
  cin>>s;
  int ans=romtoInt(s);
  cout<<ans<<endl;

  return 0;
}

