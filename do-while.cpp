#include<iostream>
using namespace std;

int main(){

    //print table of any number

    int i=1;
    int num;

    cout<<"Enter a number : ";
    cin>>num;

    do
    {
        cout<<num*i<<endl;
        i++;

    } while (i<=10);
    
}