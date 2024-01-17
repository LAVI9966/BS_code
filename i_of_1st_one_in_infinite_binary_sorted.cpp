#include <iostream>
using namespace std;
int bs(int *arr,int s,int e,int key){
        int ans =0;
    while(s<=e){
        int mid = s + ((e-s)/2);
        if(arr[mid] == key){
            ans = mid;
            e = mid-1;
        }else if(arr[mid] > key){
            e = mid - 1;
        }else{
            s = mid +1;
        }
    }
    return ans;
}
int main() {
    int arr[100] = {
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
        1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
        1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
        1, 1, 1, 1, 1, 1, 1, 1, 1, 1
    };
    //first we have to find the end index bcz upper arry is suppose to be osrted
    //so
    int s = 0;
    int e = 1;
    int key = 1;
    while(key > arr[e]){
        s = e;
        e = e*2;
    }

    //now for first index just apply the modification of binary search
    cout<<"present at "<<bs(arr,s,e,key)<<endl;
    cout<<" "<<arr[59]<<" "<<arr[60]<<endl;

    return 0;
}
