#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {
        int i,j,max=0;
        string word;
        for(i=0;i<paragraph.size();i++)
        {
            paragraph[i]=isalpha(paragraph[i])?tolower(paragraph[i]):' ';
        }
        stringstream ss(paragraph);
        unordered_set<string> s(banned.begin(),banned.end());
        unordered_map<string,int> m;
        while(ss>>word)
        {
            if(!s.count(word))
                m[word]++;
        }
        
        for(auto x:m)
        {
            if(x.second>max)
            {
                max=x.second;
                word=x.first;
            }
        }
        return word;
    }
};

int main()
{
    int n;
    string p,temp;
    cin>>p;
    vector<string> b;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>temp;
        b.push_back(temp);
    }
    Solution sol;
    string ans=sol.mostCommonWord(p,b);
    cout<<ans;
    return 0;
}