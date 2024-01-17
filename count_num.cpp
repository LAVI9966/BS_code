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
int last_occurence(int *arr,int s,int e,int key){
    int res = -1;
    while(s<=e){
        int mid = s + ((e-s)/2);
        if(arr[mid] == key){
            res = mid;
            s = mid +1;
        }else if(arr[mid] > key){
            e = mid -1;
        }else{
            s = mid +1;
        }
    }
    return res;
}
int main(){
    int n=10;;
    int arr[n] = {1,2,3,3,4,4,4,5,6,7};
    int s = 0,e=n-1,key=4;
    int first = first_occurence(arr,s,e,key);
    cout<<"First "<<first<<endl;
    int last = last_occurence(arr,s,e,key);
    cout<<"Last "<<last<<endl;
    cout<<"Total occurences "<<last-first+1<<" of kye "<<key;
}