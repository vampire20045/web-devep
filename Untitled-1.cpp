#include<iostream>
using namespace std;
int max(int size,int arr[]){
   int  u=arr[0];
    for(int i=0;i<size;i++)
    {
        int h=arr[i];
        if(u<h)
        {
            u=h;
        }
        else if(u>h)
        {
         cout<<i;

        }}
}
int main(){
    int size,x;
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
cin>>arr[i];

    }
    max(size,arr[]);
    return  0;
}
