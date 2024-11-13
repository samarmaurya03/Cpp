#include<iostream>
#include<string>
using namespace std;
int main()
{
    int a=8;
    char b='a';
    cout<<"size of int "<<sizeof(a)<<endl;
    cout<<"size of char "<<sizeof(b)<<endl;
    //long int range is 9*10^18 aprox
    //short int range is 9*10^4.5 aprox
    short int s;
    long int v;
    cout<<"size of short int "<<sizeof(s)<<endl;
    cout<<"size of long int "<<sizeof(v)<<endl;

    //size will be same but range diffrente

    signed int d;
    unsigned int e;
    cout<<"size of short "<<sizeof(d)<<endl;
    cout<<"size of long "<<sizeof(e)<<endl;

    return 0;
}