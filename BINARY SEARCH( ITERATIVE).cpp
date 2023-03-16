
#include<iostream>
using namespace std;

int binarysearch(int a[], int n, int x){
int low=0;
int high=n-1;
while(low<high){

        int mid= (low+high)/2;
if(x==a[mid]){
    return mid;
}
else if(x<a[mid]){
    high=mid-1;
}
else{ low=mid+1;}


}
return -1;
}

int main(){
     int n;
cout<<"Enter  size:"<<endl;
cin>>n;
int a[n];
 for(int i=0;i<n;i++){
    cin>>a[i];
 }
if(binarysearch(a,n-1,20)==-1){
cout<<"NOT FOUND";}
else{ cout<<"Found in "<<binarysearch(a,n-1,20)<<"th position";}


return 0;
}
