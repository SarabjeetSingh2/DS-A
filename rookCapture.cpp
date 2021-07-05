#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int numRookCaptures(vector<vector<char>>& board) {
        int i,j,m,n,c=0;
        for(i=0;i<board.size();i++)
        {
            for(j=0;j<board[0].size();j++)
            {
                if(board[i][j]=='R')
                {
                    m=i;
                    n=j;
                    break;
                }
            }
        }
        
        for(i=n-1;i>=0;i--)
        {
            if(board[m][i]=='B')
                break;
            if(board[m][i]=='p')
            {
                c++;
                break;
            } 
        }
        
        for(i=n+1;i<board[0].size();i++)
        {
            if(board[m][i]=='B')
                break;
            if(board[m][i]=='p')
            {
                c++;
                break;
            } 
        }
        
        for(i=m-1;i>=0;i--)
        {
            if(board[i][n]=='B')
                break;
            if(board[i][n]=='p')
            {
                c++;
                break;
            } 
        }
        
        for(i=m+1;i<board.size();i++)
        {
            if(board[i][n]=='B')
                break;
            if(board[i][n]=='p')
            {
                c++;
                break;
            } 
        }
        return c;
        
    }
};


int main()
{
    
    int i,j;
    char temp;
    cout<<"Enter chess positions: ";
    vector<vector<char>> image(8 ,vector<char>(8));
    for(i=0;i<8;i++)
    {
        for(j=0;j<8;j++)
        {
            cin>>temp;
            image[i][j]=temp;
        }
    }


    Solution s;

    int ans=s.numRookCaptures(image);
    cout<<ans;
    
    return 0;

}