#include<bits/stdc++.h>
using namespace std;
int binarySearch(int arr[],int left,int right,int x){
if(right>left){
int mid=left+(right-left)/2;

if(arr[mid]==x)return x;
else if(arr[mid]<x)return binarySearch(arr,mid+1,right,x);
else return binarySearch(arr,left,mid-1,x);
}

return -1;


}
int main(){
int arr[]={3,5,79,6,57,7};
int x=7;
int n=sizeof(arr)/sizeof(int);
int ans=binarySearch(arr,0,n-1,x);
if(ans==-1)cout<<"Result is not found in array!"<<endl;
else cout<<"Result is found in array at index "<<ans<<endl;
return 0;
}
