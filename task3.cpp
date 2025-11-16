#include<iostream>
using namespace std;

int main()
{
int n1, n2;
cout<<"Enter number of students in workshop 1: "<<endl;
cin>>n1;
const int N=n1;
int w1[N];
cout<<" Enter roll numbers for workshop 1: "<<endl;
for(int i=0; i<n1; i++)
{
 cout<<"Roll no. "<<i+1<< ": ";
 cin>>w1[i];
}

cout<< "Enter number of students in Workshop 2: "<<endl;
cin>>n2;
const int Num= n2;
int w2[Num];
cout<<"Enter roll no for workshop 2: "<<endl;
for(int i=0; i<n2; i++)
{
cout<<"Roll number"<< i+1<< ": ";
cin>>w2[i];
}

cout<<"\n ---Students who attended both workshops---"<<endl;
bool found= false;
for(int i=0; i<n1; i++)
{
  for(int j=0; j<n2; j++)
  {
    if(w1[i]== w2[j])
    {
    cout<<w1[i]<< " ";
    found= true;
    break;
    
    }
  }
}
  if(!found)
   {
    cout<<"None"<<endl;
   }

cout<<"-- List of all students (no duplicates)---"<<endl;
const int Number=n1+n2;
int all[Number];

int total=0;

for(int i=0; i<n1; i++)
{
 all[total++]= w1[i];
}

for(int i=0;i<n2; i++)
{
  bool exists= false;
  for(int j=0; j<total; j++)
  {
   if(w2[i]==all[j])
   {
   exists=true;
   break;
   }
  }
   if(!exists)
 {
   all[total++]=w2[i];
}
 
 }

for(int i=0; i<total; i++)
cout<<all[i]<<endl;
  
  
return 0;
}
