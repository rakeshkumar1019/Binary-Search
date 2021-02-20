#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int lastOccurrence(int * arr,int N,int val){
  int start=0;
  int end=N;
     while(start<=end){
       int mid=(start+end)/2;
       if(arr[mid]==val){
         if(mid==N-1 || arr[mid]!=arr[mid+1]){
           return mid;
         }else{
           start=mid+1;
         }
       }
       if(arr[mid]>val){
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
  cout<<lastOccurrence(arr,n,val)<<endl;
}

