#include<bits/stdc++.h>
using namespace std;
int bs(int *arr,int s,int e,int key){
    while(s<e){
        int mid = (s+e)/2;
        if(arr[mid] == key){
            return mid;
        }else if(arr[mid] > key){
            s = mid+1;
        }else if(arr[mid] < key){
            e = mid -1;
        }
    }
    cout<<"Nahi "<<endl;
    return false;
}
int main(){
    int arr[10] ={10,9,8,7,6,5,4,3,2,1};
    int s=0,e=10;
    int i = 1;
    for(i=1;i<=10;i++){
    if(bs(arr,s,e,i)){
        cout<<"Fround "<<i<<endl;
    }else{
        cout<<"Not Found"<<endl;
    }
    }
    
}