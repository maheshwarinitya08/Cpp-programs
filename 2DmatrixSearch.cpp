#include<iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int target;
    cin>>target;
    int arr[20][20];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    int r=0,c=m-1;
    bool found=false;
    while(r<n && c>=0){
        if(arr[r][c]==target){
            found=true;
        }
        if(arr[r][c]>target){
            c--;
        }
        else{
            r++;
        }
    }
    if(found){
        cout<<"Element found"<<endl;
    }
    else{
        cout<<"Element not found"<<endl;
    }
    return 0;

}