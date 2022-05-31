#include<iostream>
using namespace std;
int twosum(int arr[],int n,int nums[]){
    //int nums[3];
    int flag=0;

    for(int i=0; i<n-2; i++){
        for(int j=i+1;j<n-1;j++){
            for(int k=j+1;k<n-2;k++)
            {
                if((arr[i]+arr[j])==arr[k]){
                    flag=1;
                    nums[0]=i;
                    nums[1]=j;
                    nums[2]=k;
                    
                     //return nums;
                }
            }
        }
    }
    return flag;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        int nums[3];
        int n;
        cout<<"Enter size of array";
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        cin>>arr[i];
        
    int res= twosum(arr,n,nums);
    if(res==1)
        cout<<nums[0]<<" "<<nums[1]<<" "<<nums[2]<<endl;
        else
        cout<<"no sequence found";
        
    }

}