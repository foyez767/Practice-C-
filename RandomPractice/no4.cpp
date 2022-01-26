//***C++ Program to Find All Roots of a Quadratic Equation:ax^2+bx+c=0
#include<iostream>
#include<cmath>
using namespace std;

int main(){
    double a {0},b {0},c{0},D {0},x1{0},x2{0};
    double x3,x4;
    cout<<"Enter the value of a,b and c respectively: ";
    cin>>a>>b>>c;
    D=(b*b-4*a*c);

    if(D>0)
        {
            cout<<"Roots are real and different."<<endl;
            x1=(-b+sqrt(D))/2*a;
            x2=(-b-sqrt(D))/2*a;
            cout<<"two roots are : "<<x1<<"  "<<x2<<endl;
        }
    else if(D<0)
        {
             cout<<"Roots are complex and different."<<endl;
            x3=-b/2*a;
            x4=sqrt(-D)/2*a;
            cout<<"Two roots are: "<<endl;
            cout<<x3<<"+i"<<x4<<endl;
            cout<<x3<<"-i"<<x4<<endl;
        }
    else
        {
             cout<<"Roots are real and equal."<<endl;
             x1=x2=(-b/2*a);
             cout<<"Two roots are "<<x1<<" "<<x2<<endl;

        }
    return 0;
}
