#include<bits/stdc++.h>
using namespace std;
int bs(int *arr,int  &s,int &e,int key){
    while(s<=e){
        int mid = s + ((e-s)/2);
        if(arr[mid] == key){
            return key;
        }else if(arr[mid] < key){
            s = mid + 1;
        }else{
            e = mid - 1;
        }
    }
}
int main(){
    int arr[10] = {1,3,8,10,15};
    int s = 0;
    int e = 4;
    int key = 12;
    int c = bs(arr,s,e,key);
    int a = abs(arr[s]-key);
    int b = abs(arr[e]-key);
    if(a < b){
        cout<<"Answer is "<<arr[s];
    }else{
        cout<<"Answer is "<<arr[e];

    }
}