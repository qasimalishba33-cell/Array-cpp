#include<iostream>
using namespace std;

int main()
{
int n1 , n2;
int i=0;
int j=0;
int sum1=0;
int sum2=0;
int result=0;
cout<<"Enter number of elements in path 1: "<<endl;
cin>>n1;
const int N=n1;
int path1[N];
cout<<"Enter elements of path 1: "<<endl;
for(int i=0; i<n1; i++)
cin>>path1[i];

cout<<"Enter number of elements in Path 2: "<<endl;
cin>>n2;
const int Num =n2;
int path2[Num];
cout<<"Enter Elements of path 2: "<<endl;
for(int i=0;i<n2; i++)
cin>>path2[i];

while(i<n1 &&j<n2)
{
 if(path1[i] < path2[j])
 {
  sum1= sum1+path1[i];
  i++;
 }
 else if(path2[j] < path1[i])
 {
 sum2= sum2 + path2[j];
 j++;
 }
 else 
 {
  result= result+ (sum1 > sum2 ? sum1 : sum2) + path1[i];
  sum1= 0;
  sum2= 0;
  i++;
  j++;
 }
}

 while(i<n1)
 {
   sum1= sum1+ path1[i++];
 }
 while(j<n2)
 {
   sum2 = sum2+ path2[j++];
 }
 
 result= result + (sum1> sum2? sum1: sum2);
 cout<<"Minimum total cost: "<<result<<endl;


return 0;
}
