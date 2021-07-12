#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        vector<int> v;
        vector<int> res;
        int i,j,diff;
        for(i=0;i<s.size();i++)
        {
            if(s[i]==c)
                v.push_back(i);
        }
        
        for(i=0;i<s.size();i++)
        {
            if(s[i]==c)
                res.push_back(0);
            else
            {
                diff=INT_MAX;
                for(j=0;j<v.size();j++)
                {
                    diff=min(diff,abs(v[j]-i));
                }
                res.push_back(diff);
            }
            
        }
        return res; 
    }
};

int main()
{
    string s;
    char c;
    cin>>s;
    cin>>c;
    Solution sol;
    vector<int> v;
    v=sol.shortestToChar(s,c);
    for(int i=0;i<v.size();i++)
        cout<<v[i]<<" ";
    return 0;
}