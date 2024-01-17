#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[4][4] ={
        {10,20,30,40},
        {15,25,35,45},
        {27,29,37,48},
        {32,33,39,50}};
    int n =4 , m =4;
    int key = 11;
    int i=0;
    int j=4-1;
    while(i>=0 && i<n && j >=0 && j<m){
        if(arr[i][j] == key){
            cout<<"Fount at "<<i<<" "<<j<<endl;
        }else if(arr[i][j] >key){
            j--;
        }else if(arr[i][j] <key){
            i++;
        }
    }


}