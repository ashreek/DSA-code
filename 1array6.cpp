// TWO SUM
// SUM OF TWO ELMENT TO GET INPUT S

#include<iostream>
#include<vector>
using namespace std;

int main()
{
    //vector<int> obj;
    int s;
    cin>>s;
    int arr[5]={1,2,3,4,5};

    for(int i=0;i<5;i++){
        for(int j=i+1;j<5;j++){
            if(arr[i]+arr[j]==s){
            //    vector <int> tmp;
            //    tmp.push_back(min(arr[i],arr[j]));
            //    tmp.push_back(max(arr[i],arr[j]));
            //    obj.push_back(tmp);
            cout<<arr[i]<<" "<<arr[j]<<endl;
            }
        }
    }
    //sort(obj.begin(),obj.end());
    return 0;
}