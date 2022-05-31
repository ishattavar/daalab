#include<bits/stdc++.h>
using namespace std;
void selsort(int n,int arr[]){
    int comp,shift;

    for(int i=0;i<n-1;i++){
        int min=i;
    for(int j=i+1;j<n;j++){
        if(arr[min]>arr[j])
        min=j;
        }
        if(min!=i)
        swap(arr[i],arr[min]);
    
    }
}
int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    selsort(n,arr);
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
}

    return 0;
}
