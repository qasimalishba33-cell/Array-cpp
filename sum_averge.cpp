#include<iostream>
using namespace std;
int main(){
    int n = 10;
   int arr[n];
   
    
    for (int i = 0; i<n; i++){
        cout<<"Enter the number "<<i+1<<endl;
        cin>>arr[i];
        
    
    }
            
    cout<<endl;
    
    int sum = 0;
    for (int i = 0; i<n; i++){
        sum = sum + arr[i];
     
    }
     cout<<sum;
     cout<<endl;
     
     float average = 0;
     for (int i = 0; i < n; i++){
       average = sum/n;
         
     }
      cout<<average;
      
}