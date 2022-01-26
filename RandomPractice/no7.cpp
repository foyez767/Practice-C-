//***C++ Program to Generate Multiplication Table

#include<iostream>
using namespace std;

int main(){
    int num {0};
    cout<<"You want to see which number multiplication table? ";
    cin>>num;

    for(int i {1}; i<=10; i++)
        {
            cout<<num<<" * "<<i<<" = "<<num*i<<endl;
        }
    return 0;
}