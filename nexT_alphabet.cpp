#include<bits/stdc++.h>
using namespace std;
char next_alph(char *arr,int s,int e,char key){
    char ans='#';
    while(s<=e){
        int mid = s+ ((e-s)/2);
        if(arr[mid] == key){
            s = mid+1;
        }else if(arr[mid] <key){
            s = mid+1;
        }else{
            ans = arr[mid];
            e = mid-1;
        }
    }
    return ans;
}
int main(){
    //it will work for if the element is present or not present in the list
    char arr[4] = {'a','c','f','h'};
    cout<<next_alph(arr,0,3,'f');
}