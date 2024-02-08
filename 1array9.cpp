// SORT 0 1
#include<iostream>
using namespace std;
void sort01(int arr[],int n){
    int start=0;
    int end=n-1;
    while(start<end){
    while(arr[start]==0){
        start++;
    }
    while(arr[end]==1)
    {
        end--;
    }
    if(arr[start]==1 && arr[end]==0 && start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    }
    
}
int main()
{
    int arr[10]={1,0,0,1,1,1,0,1,0,1};
    for(int i=0;i<10;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    sort01(arr,10);
    for(int i=0;i<10;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}