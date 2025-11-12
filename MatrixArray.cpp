#include<iostream>
using namespace std;
int main(){
    int arr[4][4] = {{1,2,3,4},
                     {5,6,7,8},
                     {9,10,11,12},
                     {13,14,15,16}};
   
   
    
        int sumofMainDiagnols = 0, secSumDiagnols = 0;
        for(int i = 0, j = 3 ; i<4; i++,j--){
            sumofMainDiagnols = sumofMainDiagnols + arr[i][i];
            secSumDiagnols += arr[i][j];
            
    }
    cout<<"the sum of main diagnol is "<<sumofMainDiagnols<<" "<<endl;
   cout<<"the sum of secondary diagnol is "<<secSumDiagnols<<" "<<endl;
   
   if (sumofMainDiagnols > secSumDiagnols){
       cout<<"sum of main diagnols is higher"<<endl;
       
       
   }
   else if (sumofMainDiagnols < secSumDiagnols){
       cout<<"sum of sec diagnols is higher"<<endl;
   }
   
   else
   {
       cout<<"both sum of diagnols are equal"<<endl;
   }
}