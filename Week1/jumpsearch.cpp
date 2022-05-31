#include<iostream>
#include<math.h>
using namespace std;
int jsearch(int arr[],int key,int n){
    int prev=arr[0],m=sqrt(n);
    for(int i=0;i<n;i=i+m)
    {
        prev=arr[i];
        if(arr[i]==key)
        return i;
      //  if(arr[i]<key) redundant condition
      if(arr[i]>key){
          for(int j=i;arr[j]>prev;j--){
          if(arr[j]==key)
          return j;

      }

    }
    
}

return -1;
}

int main()
{ 
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
    if(jsearch(arr,key,n)!=-1)cout<<"present at "<<jsearch(arr,key,n);
   else cout<<" not present  ";
    }
   return 0;


}
