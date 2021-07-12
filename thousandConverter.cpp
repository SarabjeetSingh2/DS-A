#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string thousandSeparator(int n) {
        int i,c=0;
        string res="",temp=to_string(n);
        if(temp.size()<4)
            return temp;
        for(i=temp.size()-1;i>=0;i--)
        {
           
            if(c==3)
            {
                res+='.';
                c=0;
            }
            res=res+temp[i];
            c++;
            
        }
        reverse(res.begin(),res.end());
        return res;
    }
};

int main()
{
    int n;
    cin>>n;
    Solution sol;
    string ans=sol.thousandSeparator(n);
    cout<<ans;
    return 0;
}