#include <iostream>

using namespace std;

int main()
{
    int m,n;
    cin>>m;
    cin>>n;
    int arr[m][n];
    for(int j=0; j<n; j++){
        for(int i=0;i<m;i++){
            
            cin>>arr[i][j];
            
            
        }
    }
    for(int i=0; i<m; i++){
        for(int j=0;j<n;j++){
            
            cout<<arr[i][j]<<" ";
            
        }
         cout<<endl;   
        }
    return 0;
}