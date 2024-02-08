// FIND ALL DUPLICATE IN AN ARRAY
#include<iostream>
using namespace std;

int main()
{
    int arr[20]={10,20,30,40,20,50,60,40,70,70,40,90,100,10,110,120,130,110,100,130};
    for(int i=0;i<20;i++){
        for(int j=0;j<20;j++){
            if((arr[i]==arr[j])&&(i != j) && (i<j)){
                cout<<arr[i]<<endl;
            }
        }
    }
    return 0;
}