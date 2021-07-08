#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
     int i,j;
        if(strs.size()==1)
            return strs[0];
         string temp,str=strs[0];
        for(i=1;i<strs.size();i++)
        {
            temp="";
            for(j=0;j<str.size();j++)
            {
                if(strs[i][j]==str[j])
                {
                    temp=temp+str[j];
                }
                else break;
            }
            str=temp;
            if(str=="")
                return "";
        }
        return str;
    }
};
int main()
{
    
    int m,n,i;
    string temp;
    cout<<"Enter the size : ";
    cin>>m;
    vector<int> v;
    vector<string> image;
    for(i=0;i<m;i++)
    {
            cin>>temp;
            image.push_back(temp);
        
    }
    Solution s;
    temp=s.longestCommonPrefix(image);
    cout<<temp;
    return 0;
}