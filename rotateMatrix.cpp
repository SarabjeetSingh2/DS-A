#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    
    void rotate(vector<vector<int>>& v)
    {
        
        int i,j;
        for(i=0;i<v.size();i++)
        {
            for(j=i;j<v.size();j++)
            {
                swap(v[i][j],v[j][i]);
        }
        }
        reverse(v.begin(),v.end());
    }
    
bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) { 
    int t=3;    
    if(mat==target)
            return true;
        while(t--)
        {
            rotate(mat);
            if(mat==target)
                return true;
        }
        return false;
}
};

int main()
{
    
    int m,n,i,j,temp;
    cout<<"Enter the size : ";
    cin>>m;
    vector<vector<int>> image1(m ,vector<int>(m));
    vector<vector<int>> image2(m ,vector<int>(m));
    for(i=0;i<m;i++)
    {
        for(j=0;j<m;j++)
        {
            cin>>temp;
            image1[i][j]=temp;
        }
    }

    for(i=0;i<m;i++)
    {
        for(j=0;j<m;j++)
        {
            cin>>temp;
            image2[i][j]=temp;
        }
    }

    Solution s;
    bool ans=s.findRotation(image1,image2);
    cout<<ans;
   
    return 0;

}