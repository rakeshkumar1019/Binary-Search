#include<bits/stdc++.h>
using namespace std;
int binarySearchNonIncr(int arr[],int n,int val){
  int start=0;
  int end=n;
  while(start<=end){
    int mid=(start+end)/2;
    if(arr[mid]==val){
      return mid;
    }

    if(arr[mid]>val){
      start=mid+1;
    }else{
      end=mid-1;
    }
  }
  return -1;
}
int main(){
  int arr[]={5,4,3,2,1};
  int n=5;
  int val=4;
  cout<<binarySearchNonIncr(arr,n,val);
}
