#include<iostream>
using namespace std;
int main()
{
    int n1,n2;
    cout<<"enter a n1:";
    cin>>n1;
    cout<<"enter a n2:";
    cin>>n2;
    char opr;
    cout<<"enter a operator:";
    cin>>opr ;
    switch(opr){
        
        case '+':
      
        cout<<"the result is:"<<n1+n2;
        break;


        case '-':
        int subtract=0;
        subtract=n1-n2;
        cout<<"the result is:"<<subtract;
        break;


        case '*':
        int product=1;
        product=n1*n2;
        cout<<"the result is:"<<product;
        break;


        case '/':
        int division=1;
        division=n1/n2;
        cout<<"the result is:"<<division;
        break;


        default:
        cout<<"enter a valid operator";
    }
}