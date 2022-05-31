#include<iostream>
using namespace std;
int findfreq(int arr[],int n,int num){
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==num)
          count++;
        else if(arr[i]>num)
        break;
    }
    return count;
}
int main(){
    int tcase;
    cin>>tcase;
    while(tcase--){
        int n;
        cout<<"enter size of array";
        cin>>n;
        int arr[n];
        cout<<"input the elements";
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
    int num;
    cin>>num;
    int freq;
    freq=findfreq(arr,n,num);
    cout<<freq;
    }
}
