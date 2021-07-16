#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    char grid[n][n];

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>grid[i][j];
        }
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if( (i>=1) && (i<n-1) && (j>=1) && (j<n-1))
            {
                if( (grid[i][j] > grid[i][j-1]) && (grid[i][j] > grid[i][j+1]) 
                && (grid[i][j] > grid[i-1][j]) && (grid[i][j] > grid[i+1][j]) )
                {
                    cout<<"X";
                }
                else
                {
                    cout<<grid[i][j];
                }
            }
            else
            {
                cout<<grid[i][j];
            }
        }
        cout<<endl;
    }
}