#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string convertToTitle(int columnNumber) {
        string temp="";
       int  n=columnNumber;
        while(n>0)
        {
            
            char ch='A'+(n-1)%26;
            temp=ch+temp;
            n=(n-1)/26;
        }
        return temp;
    }
};

int main()
{
    int n;
    string p,temp;
    vector<string> b;
    cin>>n;
    Solution ss;
    p=ss.convertToTitle(n);
    cout<<p;
    return 0;
}