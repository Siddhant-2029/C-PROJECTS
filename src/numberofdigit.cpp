#include<iostream>
using namespace std;
int main(){
int n;
cout<<"enter n: "<<endl;
cin>>n;
int x=0;
while(n>=10){
   n=n/10;
    x++;
}
cout<<"number of digit is "<<x+1;
return 0;
}
