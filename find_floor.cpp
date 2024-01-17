#include<bits/stdc++.h>
using namespace std;
int floor_ele(int *arr,int s,int e,int key){
    int res = 0;
    while(s<=e){
        int mid = s + ((e-s)/2);
        if(arr[mid] == key){
            return key;
        }else if(arr[mid] <key){
            res = arr[mid];
            s = mid+1;
        }else{
            e = mid -1;
        }
    }
    return res;
}
int main(){
    int arr[10] = {1,3,4,6,8,10,11,13,14,15};
    int s = 0,e = 9,key = 12;
    cout<<floor_ele(arr,s,e,key);
}