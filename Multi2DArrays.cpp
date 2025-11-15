#include<iostream>
using namespace std;
int main(){
    int a[4][3];
    int b[4][2];
    for (int i = 0 ; i < 4; i++){
        for (int j = 0 ; j < 3; j++){
            cout<<"Enter the element of array["<<i<<"]["<<j<<"]:";
            cin>>a[i][j];
        }
        cout<<endl;
    }
    
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 2; j++){
            cout<<"Enter the element of array b["<<i<<"]["<<j<<"]:";
            cin>>b[i][j];
        }
        cout<<endl;
        
    }
    
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 3; j++){
            cout<<a[i][j]<<" ";
        }
        
        cout<<" ";

        for (int j = 0; j < 2; j++){
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }
}