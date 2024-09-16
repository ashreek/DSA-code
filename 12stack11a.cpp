// LARGEST RECTANGULAR AREA IN A HISTOGRAM
#include<iostream>
#include<vector>

using namespace std;

int largestRectangleArea(vector<int>& heights) {
        int ans=0;
        for(int i=0;i<heights.size();i++){
            int len=heights[i];
            int left=0;
            int right=0;
            
            int j=i+1;
            while( j < heights.size() && heights[i]<=heights[j]){
                left++;
                j++;
            }
            if(i > 0){
               j=i-1;
               while(j >= 0 && heights[i]<=heights[j]){
                right++;
                j--;
            }
            }
            else{
                right=0;
            }
            
            int crtans=len*(right+left+1);
            ans=max(ans,crtans);
        }
        return ans;
    }
int main(){
   vector<int> arr(6);
   for(int i=0;i<6;i++){
    cin>>arr[i];
   }
   int area=largestRectangleArea(arr);
   cout<<area;
return 0;
}