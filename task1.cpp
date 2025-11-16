#include<iostream>
using namespace std;
void iseven(int a[], int size)
{
cout<<"Even numbers are:"<<" "<<endl;
for(int i = 0; i<size; i++){
if(a[i]%2 == 0){
cout<<a[i];
}
}
}

void isodd(int a[], int size)
{
cout<<"Odd numbers are:"<<" "<<endl;
for(int i = 0; i<size; i++){
if(a[i]%2 != 0){
cout<<a[i];
}
}
}
void sum(int a[], int size){
int sum = 0; 

for (int i = 0; i < size; i++){
sum += a[i];
}
cout<<"Sum is"<<sum<<" "<<endl;
}

void reverse(int a[], int size){

 cout<<"reverse values is ";
for (int i = size - 1; i>=0;  i--){
   cout<<a[i];
    }
    
   
    }
    
    void smallest(int a[], int size){
    int small = a[0];
    for (int i = 0; i < size; i++){
      if(a[i] < small){
      small = a[i];
      }
      }
      cout<<"smallest number is:"<<small<<endl;
      
    }
    
    void largest(int a[], int size){
    int large = a[0];
    for (int i = 0; i < size; i++){
    if(a[i] > large){
    large = a[i];
    }
    }
    cout<<"largest number is:"<<large<<endl;
    }
    
    void frequency(int a[], int size){
    for(int i = 0; i < size; i++){
    int count = 0;
    for (int j = 0; j< size; j++){
    if(a[j] == a[i]){
    count++;
    }
    }
    cout<<count;
    }
    
    }
    
    
int main(){

int arr[100];
int size;
cout<<"Enter the number of elements you want to enter";
cin>>size;

if(size>100 || size<=0)
{
cout<<"Invalid size"<<endl;
}

for(int i = 0; i < size ; i++){
cout<<"Enter element"<<i+1<<"of array";
cin>>arr[i];

}
iseven(arr,size);
isodd(arr ,size);
sum(arr , size);
reverse(arr , size);
smallest(arr, size);
largest(arr, size);
frequency(arr , size);

}
 

