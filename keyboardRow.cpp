#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        string s1="qwertyuiop";
        string s2="asdfghjkl";
        string s3="zxcvbnm";
        int i,j,c1=0,c2=0,c3=0;
        vector<string> res;
        for(i=0;i<words.size();i++)
        {
           for(j=0;j<words[i].size();j++)
           {
            
               if(s1.find(tolower(words[i][j]))!=-1 && c2==0 && c3==0)
                c1++;
               else if(s2.find(tolower(words[i][j]))!=-1 && c1==0 && c3==0)
                   c2++;
               else if(s3.find(tolower(words[i][j]))!=-1 && c2==0 && c1==0)
                   c3++;
               else
                   break;
           }
            if(c1==words[i].size()||c2==words[i].size()||c3==words[i].size())
                res.push_back(words[i]);
            c1=c2=c3=0;
        }
        return res;
    }
};

int main()
{
    int n;
    string p,temp;
    vector<string> b;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>temp;
        b.push_back(temp);
    }
    Solution sol;
    b=sol.findWords(b);
    for(int i=0;i<b.size();i++)
    {
        cout<<b[i]<<" ";
    }
    return 0;
}