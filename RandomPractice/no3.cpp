//***C++ Program to Find Largest Number Among Three Numbers
#include<iostream>
using namespace std;

int main(){
    int a{0},b{0},c{0};
    cout<<"Enter three number separated by space : ";
    cin>>a>>b>>c;

    if(a>b)
        {
            if(a>c)
                 cout<<a<<" is the largest among three."<<endl;
            else
                 cout<<c<<" is the largest among three."<<endl;
        }
    else    
        {
            if(b>c)
                 cout<<b<<" is the largest among three."<<endl;
            else
                 cout<<c<<" is the largest among three."<<endl;
        }
    return 0;
}