/* I. Given an array of nonnegative integers, design a linear algorithm and implement it using a
program to find whether given key element is present in the array or not. Also, find total number
of comparisons for each input case. (Time Complexity = O(n), where n is the size of input)
*/
#include<iostream>
using namespace std;
void lsearch(int arr[],int n,int key){
    int i ,found=0;

    for(i=0;i<n;i++){
        if(arr[i]==key){
        found=1;
        cout<<key<<"is present"<<endl;
         
        cout<<i+1<<endl; //comparison made
        break;
        
    }
}
        
    if(found==0){
        
        cout<<"element not found"<<endl<<n; //comparison made
    }
}
int main()
{
    int n,tcases;
    cout<<"input test cases";         
    cin>>tcases;
    while(tcases--){
    //while(tcases--){ }  
    cout<<endl<<"enter size of array";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
    cin>>arr[i];
        
    }
    int key;
    cout<<"enter key";
    cin>>key;
  lsearch(arr,n,key);
    }
 return 0;
}