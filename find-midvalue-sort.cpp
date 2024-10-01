#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,39,34,59,67,77,28,99,10};
    int n = sizeof(arr) / sizeof(arr[0]);
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    int mediam=arr[n/2];
    cout<<"swap the value"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"mediam value"<<mediam<<endl;
    return 0;
}