#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int binarySearch(int* arr,int n,int val){
  int start=0;
  int end=n;
  while(start<=end){
    int mid=(start+end)/2;
    if(arr[mid]==val){
      return mid;
    }
    if(arr[mid]>val){
      end=mid-1;
    }
    if(arr[mid]<val){
      start=mid+1;
    }

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
  cout<<binarySearch(arr,n,val)<<endl;
}
