#include<bits/stdc++.h>
using namespace std;
int peakel(int *arr,int s,int e,int n){
    int ans = -1;
    while(s<=e){
        int mid = s + (e-s)/2;
        if(mid > 0 && mid < n-1){
            if(arr[mid]>arr[mid+1]&&arr[mid]>arr[mid-1]){
                return mid;
            }else if(arr[mid]<arr[mid+1]){
                s = mid+1;
            }else if(arr[mid-1]>arr[mid]){
                e = mid-1;
            }
        }else if(mid == 0){
            if(mid == 0 || arr[0] > arr[1]){
               return 0;
            }else{
              return 1;
            }
        }else if(mid == n-1){
            if(arr[n-1]>arr[n-2]){
               return n-1;
            }else{
                return n-2;
            }
        }
    }
}
int bs_incre(int *arr,int s,int e,int key){
    while(s<=e){
        int mid = s + (e-s) /2;
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
int bs_decre(int *arr,int s,int e,int key){
    while(s<=e){
        int mid = s + (e-s) /2;
        if(arr[mid] == key){
            return mid;
        }else if(arr[mid] < key){
            e = mid - 1; 
        }else{
            s = mid + 1;
        }
    }
    return -1;
}
int main(){
    int n = 6;
    int arr[n] = {1,3,8,12,4,2};
    //first find peek element from the given arry 
    int s = 0;
    int e = n-1;
    int key = 2;
    int ans = peakel(arr,s,e,n);
    int ans1 = bs_incre(arr,s,ans-1,key);
    int ans2 = bs_decre(arr,ans,e,key);
    cout<<"ANS is "<<ans<<endl;
    if(ans1 == -1 && ans2 == -1){
        cout<<"Element is not present";
    }else if(ans1 != -1){
        cout<<"SO the index of key is "<<ans1;
    }else{
        cout<<"SO the index of key is "<<ans2;

    }
}