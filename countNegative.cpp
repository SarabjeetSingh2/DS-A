#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        
        int i,j,m,n,c=0;
        m=grid.size();
        n=grid[0].size();
        
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                if(grid[i][j]<0)
                {
                    c+=n-j;
                    break;
                }
            }
        }
        return c;
    }
};

int main()
{
    
    int m,n,i,j,temp;
    cout<<"Enter the size m and n : ";
    cin>>m;
    cin>>n;
    vector<vector<int>> image(m ,vector<int>(n));
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>temp;
            image[i][j]=temp;
        }
    }

    Solution s;
    int ans=s.countNegatives(image);
    cout<<ans;
   
    return 0;

}