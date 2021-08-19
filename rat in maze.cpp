#include<iostream>
#include<vector>
using namespace std;

bool isit_safe(int n,int i ,int j)
{
    return i<n && j<n &&  i>=0 && j>=0;
}
int result=0;
void rat_in_a_maze(vector<vector<int>> &arr,int n,int i,int j,vector<vector<int>> &visited)
{
    
    if (arr[n-1][n-1]==1)
    {
        return;
    }
      
    if(i==n-1 && j==n-1)
    {
        result++;
        return;
        
    }
    if(not isit_safe(n,i,j))
    {
        return;
    }   

    visited[i][j]=1;
    if(isit_safe(n,i-1,j) && arr[i-1][j]==0 && visited[i-1][j]==0)
    {
        rat_in_a_maze(arr,n,i-1,j,visited);
    }
    
    if(isit_safe(n,i+1,j) && arr[i+1][j]==0 && visited[i+1][j]==0)
    {
        rat_in_a_maze(arr,n,i+1,j,visited);
    }
    if(isit_safe(n,i,j-1) && arr[i][j-1]==0 && visited[i][j-1]==0)
    {
        rat_in_a_maze(arr,n,i,j-1,visited);
    }
    if(isit_safe(n,i,j+1) && arr[i][j+1]==0 && visited[i][j+1]==0)
    {
        rat_in_a_maze(arr,n,i,j+1,visited);
    }
    visited[i][j]=0;

 
}



int main()
{
    int n;
    cin>>n;

    vector<vector<int>>arr(n,vector<int>(n,0));
    vector<vector<int>>visited(n,vector<int>(n,0));

    for(int i=0;i<n;++i)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }

    rat_in_a_maze(arr,n,0,0,visited);
    cout<<result;


}
