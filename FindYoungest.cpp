#include<iostream>
using namespace std;
int main()
{
    int shyam,ram,ghanshyam;
    cout<<"Enter age of ram\n";
    cin>>ram;
    cout<<"Enter age of shyam\n";
    cin>>shyam;
    cout<<"Enter age of gyanshyam\n";
    cin>>ghanshyam;
    if(ram<shyam)
    {if (ram>ghanshyam) cout<<"ghanshyam is youngest";
        else cout<<"ram is youngest";}
    else{if (shyam>ghanshyam) cout<<"ghansyham is youngest";
        else cout<<"shyam is youngest";
    }    
    return 0;
    
}