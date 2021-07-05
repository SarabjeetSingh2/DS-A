#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        
        int m,n;
        m=matrix.size();
        n=matrix[0].size();
       vector<vector<int>> vec(n, vector<int>(m, 0));
        
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			vec[j][i] = matrix[i][j];
		}
	}
	return vec;
        
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

    image=s.transpose(image);
         
         for(i=0;i<image.size();i++)
    {
        for(j=0;j<image[0].size();j++)
        {
           cout<<image[i][j]<<" ";
        }
        cout<<"\n";
    }
   
    return 0;

}