#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        int i=0,j=0,m,n;
        m=matrix.size();
        n=matrix[0].size();
        for(int i=1;i<m;i++)
        {
            for(j=1;j<n;j++)
            {
                if(matrix[i][j]!=matrix[i-1][j-1])
                    return false;
            }
        }
        return true;
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

    bool ans=s.isToeplitzMatrix(image);
    if(ans==1)
    cout<<"true";
    else 
    cout<<"false";
   
    return 0;

}