#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int firstOccurrence(int* arr,int start ,int end ,int val){
    if(start>end)return -1;
    
    while(start<=end){
      int mid=(start+end)/2;
      if(arr[mid]==val){
        //mid==0 bcz [10,10,10] mid=0(ind) we cant check for arr[mid-1] which will be out of bound
        if(mid==0 || arr[mid]!=arr[mid-1]){
          return mid;
        }else{
          end=mid-1;//move in left have
        }
      }else if(arr[mid]>val){
        end=mid-1;
      }else{
        start=mid+1;
        }
    }
    return -1;
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
  cout<<firstOccurrence(arr,0,n,val)<<endl;
}
