#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
     unordered_map<char,int> m;
        for(int i=0;i<magazine.size();i++)
        {
            m[magazine[i]]++;
        }
        
        for(auto x:ransomNote)
        {
            if(m[x]>0)
                m[x]--;
            else
                return false;
        }
        return true;
    }
};


int main()
{
    int n;
    string p,q;
    cin>>p>>q;
    Solution ss;
    bool ans=ss.canConstruct(p,q);
    cout<<ans;
    return 0;
}