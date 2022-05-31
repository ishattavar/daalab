#include<iostream>
using namespace std;
int bsearch(int arr[],int n,int key){
int l=0,r=n,c=0;
while(l<=r){
    int mid=(l+r)/2;
    if(arr[mid]==key){
        cout<<"present";
     c++;
     return c;
    }
    else if(arr[mid]>key)
    { 
        c++;
     r=mid-1;
    }
    else if(arr[mid]<key){
        c++;
     l=mid+1;
    }
    

}
if(l>r||r<0)
{
    
    return c;
    cout<<"not present";
}
}
int main(){
    int tcases;
    cout<<"input test cases";
    cin>>tcases;
    int n;
    while(tcases--){
    cout<<"enter no.of elements";
    cin>>n;
    int arr[n];

    cout<<"enter elements";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cout<<"enter key";
    cin>>key;
    cout<<bsearch(arr,n,key);
    }
}