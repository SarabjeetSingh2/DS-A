#include<bits/stdc++.h>
using namespace std;
class Solution {
public: 
    string maxValue(string n, int x) {
        int i=0,neg=0,size=n.size();
        char xc=x+'0';
        if(n[0]=='-')
        {
            n.erase(0,1);
            neg=1;
        }
        string ans="";
        while((i<size && n[i]<=xc && neg)||(i<size && n[i]>xc && !neg))
            ans=ans+n[i++];
        ans+=xc;
        while(i<size)
            ans+=n[i++];
        if(neg)
            return '-'+ans;
        return ans;

    }
};

int main()
{
    
    int m,n,i;
    string temp;
    cout<<"Enter the string and number : ";
    cin>>temp;
    cin>>n;
    Solution s;
    string ans=s.maxValue(temp,n);
    cout<<ans;
    return 0;
}