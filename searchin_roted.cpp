#include<bits/stdc++.h>
using namespace std;
int bs_min(int *arr,int s,int e,int n){
    while(s <= e){
        int mid = s + ((e-s)/2);
        int prev = (mid-1+n)%n;
        int next = (mid+1)%n;

        if(arr[mid] <= arr[next] && arr[mid] <= arr[prev]){
            return mid;
        }else if(arr[e] >= arr[mid]){
            e = mid-1;
        }else{
            s = mid+1;
        }
    }
}
int bs(int *arr,int s,int e,int key){
    while(s<=e){
        int mid = s + ((e-s)/2);
        if(arr[mid] == key){
            return mid;
        }else if(arr[mid] < key){
            s = mid + 1;
        }else{
            e = mid - 1;
        }
    }
    return -1;
}
int main(){
    int n = 8;
    int arr[n] = {11,12,15,18,2,5,6,8};
    int s = 0,e =n-1;
    // pair<int,int>ans;
    int min = bs_min(arr,s,e,n);
    cout<<"Min "<<min;
    int key = 2;
    pair<int,int>ans;
    ans.first = bs(arr,s,min-1,key);
    ans.second = bs(arr,min,e,key);
    if((ans.first == -1)&& (ans.second == -1)){
        cout<<" Not FOund "<<endl; 
    }else if(ans.first == -1){
        cout<<" Ans is "<<ans.second;
    }else{
        cout<<" Ans is "<<ans.first;
    }
}