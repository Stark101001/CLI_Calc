using namespace std;
#include <iostream>

int main(){
    int a;
    cout<<"\n";
    cout<<"Select VAlue:- \n\n 1.For Adding\t 2.For Subtraction \n\n3.For Multiplication\t4.For Division.\n";
    cout<<"\n=================================================\n\n";
    cout<<"Enter your Value : ";
    cin>>a;
    switch (a)
    {
    case 1:
        int b1;
        int c1;
        cout<<"\nenter your first number : ";
        cin>>b1;

        cout<<"\nenter your Second number : ";
        cin>>c1;

        cout<<"\nA added B is : "<<b1+c1;
        break;
    case 2:
        int b2;
        int c2;
        cout<<"\nenter your first number : ";
        cin>>b2;

        cout<<"\nenter your Second number : ";
        cin>>c2;

        cout<<"\nA Subtract B is : "<<b2-c2;
        break;
    case 3:
        int b3;
        int c3;
        cout<<"\nenter your first number : ";
        cin>>b3;

        cout<<"\nenter your Second number : ";
        cin>>c3;

        cout<<"\nA Multiplication B is : "<<b3*c3;
        break;
    case 4:
        int b4;
        int c4;
        cout<<"\nenter your first number : ";
        cin>>b4;

        cout<<"\nenter your Second number : ";
        cin>>c4;

        cout<<"\nA division B is : "<<b4/c4;
        break;
    
    default:cout<<"pls enter above you given value";
        break;
    }
}