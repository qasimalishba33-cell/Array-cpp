#include<iostream>
using namespace std;
int main(){
    int n = 100;
    int arr[n] ;
    cout<<"Array"<<endl;
    for (int i = 0; i < 100 ; i++){
         arr[i] = 5;
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int sum = 0;
    for (int i = 0 ; i < 100; i++){
        sum += arr[i];
        
    }
    cout<<"The sum of array = "<<sum;
    
    
}