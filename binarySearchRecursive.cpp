#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int binarySearch(int* arr,int start,int end,int val){
      int mid=(start+end)/2;
      if(start>end){
        return -1;
      }
      if(arr[mid]==val){
        return mid;
      }
      if(arr[mid]>val){
        binarySearch(arr,start,mid-1,val);
      }else{
         binarySearch(arr,mid+1,end,val);
      }
    
}
int main(){
int n;
  cin>>n;
  int* arr=new int[n];
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  int val;
  cin>>val;
  cout<<binarySearch(arr,0,n,val)<<endl;
}
