#include<iostream>
using namespace std;
int main(){
int n;
cout<<"enter n : ";
cin>>n;
int x;
int y=0;
while(n!=0)
{   x=n%10;
    n=n/10;
    y=y+x;
}
cout<<"sum is "<<y;
return 0;
}
