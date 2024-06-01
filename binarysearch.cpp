// Binary search
#include<iostream>
using namespace std;

int binarysearch(int arr[],int size,int key){
int start=0;
int end=size-1;
int mid=start+(end-start)/2;

while(start<=end){
    if(arr[mid]==key){
        return mid;
    }
    if(arr[mid]>key){
        end=mid-1;
    }
    else{
        start=mid+1;
    }
    mid=start+(end-start)/2;
}
return -1;
}
int main(){
int values[10]={1,2,3,4,5,6,7,8,9,11};
int size=sizeof(values)/sizeof(int);
cout<<size<<endl;
int key;
cin>>key;
cout<<binarysearch(values,10,key);

return 0;
}