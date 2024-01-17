#include<bits/stdc++.h>
using namespace std;
int bs(int *arr,int s,int e,int key){
    if(s>e)
        return 0;
    
    int mid = (s+e)/2;
    if(arr[mid] == key){
        return mid;
    }
    if(arr[mid] < key){
        return bs(arr,mid+1,e,key);
    }
    if(arr[mid] > key){
        return bs(arr,s,mid-1,key);
    }
}
int main(){
    int arr[10] ={1,2,3,4,5,6,7,8,9,10};
    int s=0,e=9;
    for(int i=1;i<=10;i++){
    if(bs(arr,s,e,i)){
        cout<<"Fround"<<endl;
    }else{
        cout<<"Not Found"<<endl;
    }
    }
    bool p = true;
    cout<<p;
}