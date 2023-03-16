#include<iostream>
using namespace std;

int binary(int a[], int low, int high, int x){
if(low>high){
    return -1;
}
int mid=(low+high)/2;
if(x==a[mid]){
    return mid;
}
else if(x<a[mid]){
    return binary(a,low,mid-1,x);
}
else{return binary(a,mid+1,high,x);

}}

int main(){
    int n;
cout<<"Enter  size:"<<endl;
cin>>n;
int a[n];
 for(int i=0;i<n;i++){
    cin>>a[i];
 }
if(binary(a,0,n-1,20)==-1){
cout<<"NOT FOUND";}
else{ cout<<"Found in "<<binary(a,0,n-1,20)+1<<"th position";}

return 0;
}
