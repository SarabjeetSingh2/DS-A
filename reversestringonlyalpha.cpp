#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string reverseOnlyLetters(string s) {
     int i=0,j=s.size()-1;
        while(i<j)
        {
            if(isalpha(s[i]) || isalpha(s[j]))
               {
                   if(isalpha(s[i]) && isalpha(s[j]))
                      {

                      swap(s[i],s[j]);
                          i++;
                          j--;
                      }
                    else if(isalpha(s[i]))
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
    string s;
    cin>>s;
    Solution sol;
    string ans=sol.reverseOnlyLetters(s);
    cout<<ans;
    return 0;
}