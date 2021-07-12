#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int check(char s)
    {
        if(tolower(s)=='a' || tolower(s)=='e' || tolower(s)=='i' || tolower(s)=='o' || tolower(s)=='u')
            return 1;
        return 0;
    }
    
    string reverseVowels(string s) {
      int i=0;
       int j=s.size()-1;
        while(i<j)
        {
            if(check(s[i]) || check(s[j]) )
            {
                if(check(s[i]) && check(s[j]))
                {
                    swap(s[i],s[j]);
                    i++;
                    j--;
                }
                else if(check(s[i]))
                    j--;
                else 
                    i++;
                    
            }
            else
            {
                i++;
                j--;
            }
        }
        return s;
    }
};

int main()
{
    int n;
    string p;
    cin>>p;
    Solution ss;
    p=ss.reverseVowels(p);
    cout<<p;
    return 0;
}