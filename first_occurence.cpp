#include<bits/stdc++.h>
using namespace std;
int first_occurence(int *arr,int s,int e,int key){
    int res = -1;
    while(s<=e){
        int mid = s + ((e-s)/2);
        if(arr[mid] == key){
            //main part rest is same
            res  = mid;
            e = mid-1;
        }else if(arr[mid] < key){
            s = mid +1;
        }else{
            e= mid-1;
        }
    }
    return res;
}
int main(){
    int n=10;;
    int arr[n] = {1,2,3,3,4,4,4,5,6,7};
    int s = 0,e=n-1,key=4;
    int ans = first_occurence(arr,s,e,key);
    cout<<ans;
}