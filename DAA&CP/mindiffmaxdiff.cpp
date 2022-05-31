#include<bits/stdc++.h>
using namespace std;
int minDiff(int[],int,int);
int main()
{
        int size,k;
  cin >> size;
  cin >> k;
  int array[size];
  
  for(int i=0;i<size;i++)
  {
   cin >> array[i];
  }
  cout << minDiff(array,k,size);
  return 0;
}

int minDiff(int A[],int k,int size)
{
 int result =INT_MAX;
   sort(A,A+size);
   for(int i=0;i<size-k;i++)
   {
  result = min(result,A[i+k-1]-A[i]);
   }
   return result;
}