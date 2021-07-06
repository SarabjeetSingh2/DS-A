#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        int r=mat.size(),c=mat[0].size(),i,j;
        vector<pair<int,int>> res;
        for(i=0;i<r;i++)
        {
            int sum=0;
            for(j=0;j<c;j++){
                if(mat[i][j]==0)
                    break;
            }
            sum=j;
            res.push_back(make_pair(sum,i));
        }
        sort(res.begin(),res.end());
        vector<int> vect;
        for(i=0;i<k;i++)
            vect.push_back(res[i].second);
        return vect;
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
    int k;
    cin>>k;
    Solution s;
    v=s.kWeakestRows(image,k);
   for(i=0;i<k;i++)
        cout<<v[i]<<" ";
 
   
    return 0;

}