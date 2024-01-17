//peak element for sorted or unsorted ary
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n = 5;
    int arr[n] = {1,3,1,4,6};
    int s = 0;
    int e = n-1;
    while(s <= e){
        int mid = s + ((e-s)/2);
        if(mid > 0 && mid < n-1){
            if(arr[mid] > arr[mid-1] && arr[mid] > arr[mid+1]){
                cout<<arr[mid]<<" Is a peek Element" <<endl;
                return 0;
            }else if(arr[mid] < arr[mid -1]){
                s = mid + 1;
            }else{
                e = mid - 1;
            }
        }else if(mid == 0){
            if(arr[0] > arr[1]){
                cout<<arr[0]<<" Is b peek Element" <<endl;
                return 0;
            }else{
                cout<<arr[1]<<" Is c peek Element" <<endl;
                return 0;
            }
        }else if(mid == n-1){
            if(arr[n-1] > arr[n-2]){
                cout<<arr[n-1]<<" Is d peek Element" <<endl;
                return 0;
            }else{
                cout<<arr[n-2]<<" Is e peek Element" <<endl;
                return 0;
            }

        }
    }
}