//number of time a array is roated
#include<bits/stdc++.h>
using namespace std;
int rotate_found(int *arr,int s,int e,int n){
    while(s<=e){

        int mid = (s+e)/2;
        int next = (mid+1)%n;
        int prev = (mid-1+n)%n; 

        //finding answer

        if(arr[mid] <= arr[next] && arr[mid] <= arr[prev]){
            cout<<"MID "<<mid<<endl;
            return mid;
        } 
    }
    
}
int main(){
    int n = 8;
    int arr[n] = {11,12,15,18,2,5,6,8};
    int s = 0,e =n-1;
    cout<<rotate_found(arr,s,e,n);

}