// SELECTION SORT
#include<iostream>
#include<vector>
using namespace std;

void selectionsort(int arr[],int n){
      for(int i=0;i<n-1;i++){
        int minindex=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<=arr[minindex]){
            minindex=j;
            }
        }
        swap(arr[minindex],arr[i]);
      }
      for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
      }
}
int main(){
int arr[11]={5,8,4,2,8,7,6,4,1,8,9};

selectionsort(arr,11);
// for(int i=0;i<arr.size();i++){
//     cout<<arr[i]<<" ";
// }

return 0;
}