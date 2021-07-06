#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        
        int m,n,min,max,i,j,k,l;
        m=matrix.size();
        n=matrix[0].size();
        vector<int> v;
        
        min=INT_MAX;
        max=INT_MIN;
        
        for(i=0;i<m;i++)
        {
        min=INT_MAX;
        max=INT_MIN;
            for(j=0;j<n;j++)
            {
                if(min>matrix[i][j])
                {
                    min=matrix[i][j];
                    k=j;
                }
            }
            for(l=0;l<m;l++)
            {
                if(max<matrix[l][k])
                {
                    max=matrix[l][k];
                }
            }
            if(max==min)
            {
                v.push_back(max);
                return v;
            }
        }
        return v;
        
    }
};
int main()
{
    
    int m,n,i,j,temp;
    cout<<"Enter the size m and n : ";
    cin>>m;
    cin>>n;
    vector<int> v;
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
    v=s.luckyNumbers(image);
    cout<<v[0];
 
   
    return 0;

}