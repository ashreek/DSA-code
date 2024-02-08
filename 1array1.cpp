// find unique no in an array
// n = size of an array      n=2m+1
// if n=7 then array be like [1,2,4,2,1,3,3]-----> UNIQUE NO:4
#include<iostream>
using namespace std;

int main()
{
    int m=4;
    int arr[(2*m)+1]={10,20,30,10,40,20,30,90,40};
    int answer=0;
    for(int i=0;i<((2*m)+1);i++){
        answer=arr[i]^answer;
    }
    cout<<answer;
    return 0;
}