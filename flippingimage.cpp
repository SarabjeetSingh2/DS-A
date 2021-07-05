#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        
       int i,j,k,temp,n=image.size();
    
        for(i=0;i<n;i++)
        {
            for(j=0;j<n/2;j++)
            {
                temp=image[i][j];
                image[i][j]=image[i][n-j-1];
                image[i][n-j-1]=temp;
            }
            for(k=0;k<n;k++)
            {
               image[i][k]=1-image[i][k];
            }
        }
        return image;
        
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

    image=s.flipAndInvertImage(image);
    
    cout<<"After flipping and inverting \n";
     for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
           cout<<image[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;

}