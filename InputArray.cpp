#include<iostream>
using namespace std;
int main(){
    int arr [5];
    
    for(int i = 0 ; i < 5 ; i++){
        cout<<"Enter number "<<i+1<<" : ";
        cin>>arr[i];
    }
    
    cout<<endl;
    
    cout<<"Your array"<<endl;
    for(int i = 0 ; i < 5 ; i++){
        cout<<arr[i]<<" ";
    }
    
}
