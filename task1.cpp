#include<iostream>
using namespace std;
int main()
{
    int x;
    cout<<"enter any number :";
    cin>>x;
    switch(x)
    {
        
        case 'A':
        cout<<"choice is A";
        break;
        case 'B':
        cout<<"choice is B";
        break;
        case 'C':
        cout<<"choice is C";
        break;
        deafult:
        cout<<"choice is other that A,B andC";
    }
}