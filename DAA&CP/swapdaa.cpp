#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,val;
    cin>>n;
    vector<int> arr;
    for(int i=0;i<n;i++)
    {
        cin>>val;
        arr.push_back(val);
    }
int i=0, ans=0;
while(i<n)
{
    if(arr[i]!=i)
    {
        swap(arr[i],arr[arr[i]]);
        ans++;
    }
    else
    { i++;}
}
 
cout<<ans<<endl;
    return 0;
}