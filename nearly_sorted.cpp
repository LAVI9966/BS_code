#include<bits/stdc++.h>
using namespace std;
int nearly_sorted(int *arr,int s,int e,int key){
    while(s<=e){
        int mid = s + ((e-s)/2);
        if(mid-1 >= s && arr[mid-1] == key){
            return mid-1;
        }
        if(mid+1 <= e && arr[mid-1] == key){
            return mid-1;
        }
        if(arr[mid] == key){
            return mid; 
        }else if(arr[mid] < key){
            s = mid + 2;
        }else{
            e = mid - 2;
        }
    }
    return -1;
}
int main(){
    int arr[10]={0,1,2,4,3,5,7,6,8,9};
    int s = 0, e =10-1;
    int key = ;
    int ans = nearly_sorted(arr,s,e,key);
    if(ans != -1)
        cout<<"present ";
    else
        cout<<"Not present";
}